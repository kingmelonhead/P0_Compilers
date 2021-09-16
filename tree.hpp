/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#define SPACE ' '
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "node.hpp"
Node* buildTree(int, std::string = "");
std::string get_next_substring(std::string, int&);
void printInorder(std::ofstream&, Node* = NULL);
void printPreorder(std::ofstream&, Node* = NULL);
void printPostorder(std::ofstream&, Node* = NULL);
void insertNode(std::string, Node*);
void printError();