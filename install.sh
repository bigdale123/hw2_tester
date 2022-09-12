#!/bin/bash

# Create binary folders
mkdir ~/.local/bin
mkdir ~/.local/bin/hw2_tester

# upload files to the hw2_tester
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/TA_asgn2_testv2.c --output-document ~/.local/bin/hw2_tester/TA_asgn2_testv2.c
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/Makefile --output-document ~/.local/bin/hw2_tester/Makefile
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/hw2_tester --output-document ~/.local/bin/hw2_tester/hw2_tester

# Update .bashrc file
wget https://raw.githubusercontent.com/bigdale123/hw2_tester/main/bashrc --output-document ~/.bashrc

# Apply bashrc changes
source ~/.bashrc
