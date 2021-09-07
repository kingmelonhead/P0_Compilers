#include "tree.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int nodeCount; 
 
struct Node {
    char key; // this will be the first character of the strings, aka what the tree sorty by
    Node* left;
    Node* right;
    vector<string> elements; // list of strings starting with the key
};

void insertNode(string element) {

}

void buildTree(int mode, string fileName, string buffer){
    string local_buffer = buffer;
    if (mode == 0){
        //program is invoked using "P0"
        cout << "Tree is being built stdin\n\n";
        cout << "Buffer being used: " << local_buffer << endl;
    }
    else {
        //program is invoked using "P0 < somefile"
        cout << "Tree is being built by reading from somefile\n\n";

        //attempt to open the file passed as arg

        //if it cant open then display an error and exit

        //if it can open the file then red from the file into the local_buffer variable
    }

    //build the tree using the local_buffer var

}
void printInorder(){
    cout << "Tree in order:\n";

    // tree printing stuff goes here

    cout << endl;
}
void printPreorder(){
    cout << "Tree pre order:\n";

    // tree printing stuff goes here

    cout << endl;
}
void printPostorder(){
    cout << "Tree post order:\n";

    // tree printing stuff goes here

    cout << endl;
}