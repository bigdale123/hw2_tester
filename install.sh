#!/bin/bash

# Create binary folders
mkdir ~/.local/bin
mkdir ~/.local/bin/hw2_tester

# upload files to the hw2_tester
wget <tester-source-url> --output-document ~/.local/bin/hw2_tester/TA_asgn2_testv2.c
wget <Makefile-url> --output-document ~/.local/bin/hw2_tester/Makefile
wget <tester-url> --output-document ~/.local/bin/hw2_tester/hw2_tester

# Update .bashrc file
wget <bashrc-url> --output-document ~/.bashrc

# Apply bashrc changes
source ~/.bashrc
