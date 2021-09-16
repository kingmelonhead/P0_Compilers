/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include "tree.hpp"
#include "node.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

int nodeCount; 
 
ifstream in_file;
string word;
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
        in_file.open(fileName, ios::in);
        
        if (in_file.is_open()){

            while (in_file >> word){
                buffer += word + ' ';
            }

        }
        else {
            cout << "The specified file does not exist, exiting...\n"; 
            exit (0);
        }
        //if it can open the file then red from the file into the local_buffer variable

    }
    else {
        cout << "Enter the strings that will be inserted into the bst. Press ENTER, then ctrl + D when done\n";
        for (string line; cin >> line;) buffer += line + ' ';
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