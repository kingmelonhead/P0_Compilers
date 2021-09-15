/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include "tree.hpp"
#include "node.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int nodeCount; 
 


void printError() {
    cout << "ERROR: Too many arguments provided...\n exiting program now\n\n";
    exit(0);
}

void insertNode(string element) {

}

void buildTree(int mode, string fileName){
    string buffer = "";
    if (mode == 0){
        //program is invoked using "./P0 somefile"
        cout << "Tree is being built by reading from somefile\n\n";

        //if it cant open then display an error and exit

        //if it can open the file then red from the file into the local_buffer variable

    }
    else if (mode == 1){
        rewind(stdin);
        for (string line; cin >> line;) {
            string temp = line;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            if (temp != "eof") buffer += (line + ' ');
            else break;
        }
    }
    else {
        cout << "Enter the strings that will be inserted into the bst. Enter 'eof' when finished\n";
        for (string line; cin >> line;) {
            string temp = line;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            if (temp != "eof") buffer += (line + ' ');
            else break;
        }
    }

    cout << "buffer being used is:\n" << buffer << endl;

    //build the tree using the buffer var

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