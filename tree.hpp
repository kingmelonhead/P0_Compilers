/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#define SPACE ' '
#include <string>
#include "node.hpp"
void buildTree(int, std::string = "");
std::string get_next_substring(std::string, int&);
void printInorder();
void printPreorder();
void printPostorder();
void insertNode(std::string, Node*);
void printError();