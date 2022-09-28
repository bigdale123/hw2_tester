#!/bin/bash

# Create binary folders
mkdir ~/.local
mkdir ~/.local/bin
mkdir ~/.local/bin/hw2_tester
mkdir ~/.local/bin/hw4_tester

# upload files to the hw2_tester
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/TA_asgn2_testv2.c --output-document ~/.local/bin/hw2_tester/TA_asgn2_testv2.c
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/Makefile --output-document ~/.local/bin/hw2_tester/Makefile
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/hw2_tester --output-document ~/.local/bin/hw2_tester/hw2_tester

# upload files to the hw4_tester
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/hw4_tester/Makefile --output-document ~/.local/bin/hw4_tester/Makefile
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/hw4_tester/TA_asgn4.c --output-document ~/.local/bin/hw4_tester/TA_asgn4.c
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/hw4_tester/hw4_tester --output-document ~/.local/bin/hw4_tester/hw4_tester

# Update .bashrc file
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/bashrc --output-document ~/.bashrc

# Apply bashrc changes
source ~/.bashrc

#Lastly, change file exeecute permsisions
chmod +x ~/.local/bin/hw2_tester/hw2_tester
chmod +x ~/.local/bin/hw4_tester/hw4_tester

#logoff to apply changes.
exit
