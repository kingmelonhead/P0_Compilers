/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include <iostream>
#include <algorithm>
#include "tree.hpp"

using namespace std;

int main(int argc, char** argv){

    if (argc > 2) printError();                                                         // Too many arguments given
    else if (argc == 2) buildTree(0, argv[1]);                                          // ./P0 somefile            
    else buildTree(1);                                                                  // ./P0  & ./P0 < somefile

    printInorder();
    printPreorder();
    printPostorder();

    return 0;
}

