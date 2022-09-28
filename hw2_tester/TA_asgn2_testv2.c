#include <stdio.h>
#include "asgn2.h"

/* in case you want to change the inputs or outputs */
// for testing cubeOfOdd()
char *cubeOfOddTests[3][2] = {{"5", "1\n27"}, {"3", "1"}, {"8", "1\n27\n125\n343"}};
int cubeInputs[3] = {5, 3, 8};
char *cubeOutputs[3] = {"1 27", "1", "1 27 125 343"};


// for testing introToCS330()
int introInputs[] = {3, 70, 4, 17, 42};
char *introOutputs[] = {"CS", "UAB", "64", "Go Blazers", "UAB CS 330"};
int numIntroTests = 5;

// for testing printHello()
int pHInputs[] = {1, 3, 7, 10, 33};
char *pHOutputs[] = {"0HELLO", "0HELLOHELLO3",
                    "0HELLOHELLO3HELLO567",
                    "0HELLOHELLO3HELLO567HELLO910",
                    "0HELLOHELLO3HELLO567HELLO9101112131415HELLO171819202122232425262728293031HELLO33"};
int numpHTests = 5;

// for testing paintGallons()
int pGInputs[] = {10, 12, 8};
int pGOutput = 2;
int numpGTests = 1;

// for testing grader()
int graderInputs[][3] = {{72, 88, 22},
                        {66, 100, 24},
                        {100, 90, 18},
                        {70, 100, 21}};
char *graderOutputs[] = {"PASS",
                        "FAIL",
                        "FAIL",
                        "FAIL"};
int numGraderTests = 4;



int main(int argc, char **argv){
    /*
    Was thinking of making something fancier, but didn't get around to it:
    Note: need to pipe stdout (print from cubeOfOdd) to another function to test this
    maybe fork a child process, pipe it's output, call function in child
       then have parent read pipe (and place in a buf) and evaluate strcmp buf against the answer?
    */

    printf("==================Testing cube of odd=======================\n");
    int testNum = 0;
    int input = 0;
    for(testNum = 0; testNum < 3; testNum++){
        //input = atoi(cubeOfOddTests[testNum][0]);
        //sprintf(cubeOfOddTests[testNum][0], "%d", &input);
        printf("Testing %3d, expected: %s | was:\n", cubeInputs[testNum], cubeOutputs[testNum]);
        cubeOfOdd(cubeInputs[testNum]);
    }
    printf("============================================================\n\n");
    printf("==================Testing IntroToCS330======================\n");
    for(int i = 0; i < numIntroTests; i++){
        printf("Testing %3d, expected: ", introInputs[i]);
        printf("%12s", introOutputs[i]);
        printf(" | was: ");
        introToCS330(introInputs[i]);
    }

    printf("============================================================\n\n");
    printf("==================Testing printHello========================\n");
    for(int i = 0; i < numpHTests; i++){
        printf("Testing %3d, expected: ", pHInputs[i]);
        printf("%28s", pHOutputs[i]);
        printf(" | was: ");
        printHello(pHInputs[i]);
        //printHELLO(pHInputs[i]);
    }

    printf("============================================================\n\n");
    printf("==================Testing paintGallons======================\n");
    printf("Testing %3d, %3d, %3d, expected: ", pGInputs[0], pGInputs[1], pGInputs[2]);
    printf("%5d", pGOutput);
    printf(" | was: ");
    printf("%5d", paintGallons(pGInputs[0], pGInputs[1], pGInputs[2]));
    //paintGallons(pGInputs[0], pGInputs[1], pGInputs[2]);
    printf("\n");
    
    printf("============================================================\n\n");
    printf("==================Testing grader============================\n");
    for(int i = 0; i < numGraderTests; i++){
        printf("Testing %3d/%3d/%3d, expected: ", graderInputs[i][0],graderInputs[i][1], graderInputs[i][2]);
        printf("%5s", graderOutputs[i]);
        printf(" | was: ");
        grader(graderInputs[i][0],graderInputs[i][1], graderInputs[i][2]);
    }
    
    return 0;
}
