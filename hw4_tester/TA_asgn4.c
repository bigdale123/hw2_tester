#include <stdio.h>
#include "asgn4.h"

// for testing printHello()

int row1[] = {1, 4, 3, 5, 7, 6, 8, 9, 10, 2};
int row2[] = {2, 4, 54, 40, 2, 36, 46, 22, 88, 72, 0, 51, 5, 61, 67};
int row3[] = {48, -7, 29, -30, -16, 91, -53, -89, 10, -35, 66, 98, 14, 55, 62, -59, -39, 30, -63, 48};
int row4[] = {-59, 23, -66, -17, 71, -13, -84, 4, -39, 10, -58, 44, 89, -62, 60, 55, 63, -64, -35, -9};
int row5[] = {26, -90, 54, 38, 22, -100, 69, 13, -6, 34, 36, -94, 29, -86, -85, -90, 63, -67, 98, 72, 5, -77, -54, -90, -15, 83, -1, -9, 46, -79};
int *Inputs[] = {row1, row2, row3, row4, row5};
int Sizes[] = {10,15,20,20,30};

int row1_answer[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int row2_answer[] = {0, 2, 2, 4, 5, 22, 36, 40, 46, 51, 54, 61, 67, 72, 88};
int row3_answer[] = {-89, -63, -59, -53, -39, -35, -30, -16, -7, 10, 14, 29, 30, 48, 48, 55, 62, 66, 91, 98};
int row4_answer[] = {-84, -66, -64, -62, -59, -58, -39, -35, -17, -13, -9, 4, 10, 23, 44, 55, 60, 63, 71, 89};
int row5_answer[] = {-100, -94, -90, -90, -90, -86, -85, -79, -77, -67, -54, -15, -9, -6, -1, 5, 13, 22, 26, 29, 34, 36, 38, 46, 54, 63, 69, 72, 83, 98};
int *Answers[] = {row1_answer, row2_answer, row3_answer, row4_answer, row5_answer};
int num_i_tests = 5;

void printArray(int *arr, int arr_len){
    printf("[");
    int i = 0;
    for(i = 0; i < arr_len-1; i++){
        printf("%d, ",arr[i]);
    }
    printf("%d]",arr[i]);
}

int isEqual(int *arr1, int *arr2, int arr_size){
    for(int i = 0; i < arr_size; i++){
        if (arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}



int main(int argc, char **argv){
    /*
    Was thinking of making something fancier, but didn't get around to it:
    Note: need to pipe stdout (print from cubeOfOdd) to another function to test this
    maybe fork a child process, pipe it's output, call function in child
       then have parent read pipe (and place in a buf) and evaluate strcmp buf against the answer?
    */

    printf("==================Testing insertionSort=======================\n");
    int testNum = 0;
    for(testNum = 0; testNum < num_i_tests; testNum++){
        //printArray(Inputs[testNum],Sizes[testNum]);
        insertionSort(Inputs[testNum],Sizes[testNum]);
        // printArray(Inputs[testNum],Sizes[testNum]);
        printf("Test result for Test %d: ", testNum+1);
        int result = isEqual(Inputs[testNum], Answers[testNum], Sizes[testNum]);
        if (result == 0){
            printf("FAIL\n    Expected ");
            printArray(Answers[testNum], Sizes[testNum]);
            printf(", but got ");
            printArray(Inputs[testNum], Sizes[testNum]);
            printf(".\n");
        }
        else{
            printf("PASS\n");
        }
    }


    // Reinitializing Inputs
    int new_row1[] = {1, 4, 3, 5, 7, 6, 8, 9, 10, 2};
    int new_row2[] = {2, 4, 54, 40, 2, 36, 46, 22, 88, 72, 0, 51, 5, 61, 67};
    int new_row3[] = {48, -7, 29, -30, -16, 91, -53, -89, 10, -35, 66, 98, 14, 55, 62, -59, -39, 30, -63, 48};
    int new_row4[] = {-59, 23, -66, -17, 71, -13, -84, 4, -39, 10, -58, 44, 89, -62, 60, 55, 63, -64, -35, -9};
    int new_row5[] = {26, -90, 54, 38, 22, -100, 69, 13, -6, 34, 36, -94, 29, -86, -85, -90, 63, -67, 98, 72, 5, -77, -54, -90, -15, 83, -1, -9, 46, -79};
    Inputs[0] = new_row1;
    Inputs[1] = new_row2;
    Inputs[2] = new_row3;
    Inputs[3] = new_row4;
    Inputs[4] = new_row5;

    printf("==================Testing selectionSort=======================\n");
    for(testNum = 0; testNum < num_i_tests; testNum++){
        //printArray(Inputs[testNum],Sizes[testNum]);
        selectionSort(Inputs[testNum],Sizes[testNum]);
        // printArray(Inputs[testNum],Sizes[testNum]);
        printf("Test result for Test %d: ", testNum+1);
        int result = isEqual(Inputs[testNum], Answers[testNum], Sizes[testNum]);
        if (result == 0){
            printf("FAIL\n    Expected ");
            printArray(Answers[testNum], Sizes[testNum]);
            printf(", but got ");
            printArray(Inputs[testNum], Sizes[testNum]);
            printf(".\n");
        }
        else{
            printf("PASS\n");
        }
    }
    
    return 0;
}
