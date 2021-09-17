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
void printInorder(std::ofstream&, Node* = NULL, int = 0);
void printPreorder(std::ofstream&, Node* = NULL, int = 0);
void printPostorder(std::ofstream&, Node* = NULL, int = 0);
void insertNode(std::string, Node*);
void printError();