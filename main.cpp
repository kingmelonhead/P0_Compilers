#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char** argv){

    if (argc == 1) buildTree(0);
    else buildTree(1);


    return 0;
}

