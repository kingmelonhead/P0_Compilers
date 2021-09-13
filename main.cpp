#include <iostream>
#include <algorithm>
#include "tree.hpp"

using namespace std;

int main(int argc, char** argv){

    if (argc > 2) printError();                                                         // Too many arguments given
    else if (argc == 2) buildTree(0, argv[1]);                                          // ./P0 somefile
    else if ((fseek(stdin, 0, SEEK_END), ftell(stdin)) > 0) buildTree(1);               // ./P0 < somefile
    else buildTree(2);                                                                  // ./P0

    printInorder();
    printPreorder();
    printPostorder();

    return 0;
}

