/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include "tree.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

string get_next_substring(string buffer, int &start_index){
    string temp;
    int count = 0;
    if (buffer[start_index] == SPACE) {
        cout << "Something with the start variable went wrong, exiting program...\n";
        exit (0);
    } 
    while (1){
        if (buffer[start_index + count] == SPACE){
            temp = buffer.substr(start_index, count++);
            start_index = start_index + count;
            break;
        }
        else count++;
    };
    return temp;
}

void printError() {
    cout << "ERROR: Too many arguments provided...\n exiting program now\n\n";
    exit(0);
}

void insertNode(string element, Node* root) {
    char this_key  = element[0];
    //check to see if this is the appropriate node
    if (this_key == root->key){
        //it is the appropriate node, so see if the element already exists
        if(std::find(root->elements.begin(), root->elements.end(), element) != root->elements.end()) {
            //is in vector, so do nothing
        } 
        else {
            //not in vector, so add the element to the node
            root->elements.emplace_back(element);
        }       
    }
    else {
        //this is not the appropriate node
        if (this_key < root->key){
            //the word needs to go to the left node
            if (root->left == NULL){
                //if left doesnt exist
                root->left = new Node(this_key);
                root->left->elements.emplace_back(element);
            }
            else {
                //left does exist
                insertNode(element, root->left);
            }
        }
        else {
            //the word needs to go to the right node
            if (root->right == NULL){
                //right doesnt exist
                root->right = new Node(this_key);
                root->right->elements.emplace_back(element);
            }
            else {
                //right does exist
                insertNode(element, root->right);
            }
        }
    }
}

void buildTree(int mode, string fileName){
    ifstream in_file;
    string word, temp_word, temp = "", buffer = "";
    int index = 0, word_count = 0;
    if (mode == 0){
        //program is invoked using "./P0 somefile"

        in_file.open(fileName, ios::in);

        if (in_file.is_open()){
            while (in_file >> word){
                buffer += word + ' ';
                word_count++;
            }
        }
        else {
            cout << "The specified file does not exist, exiting...\n"; 
            exit (0);
        }
    }
    else {
        cout << "Enter the strings that will be inserted into the bst. Press ENTER, then ctrl + D when done\n";
        for (string line; cin >> line;) {
            buffer += line + ' ';
            word_count++;
        }
    }

    cout << "The buffer being used is:" << buffer << ":\n";

    //if no input was found then exit
    if (buffer == ""){
        cout << "no input was given, exiting program...\n";
        exit(0);
    }

    //make root
    temp_word = get_next_substring(buffer, index);
    struct Node* root = new Node(temp_word[0]);
    root->elements.emplace_back(temp_word);

    //make tree
    for (int i = 1; i < word_count; i++) {
        temp_word = get_next_substring(buffer, index);
        insertNode(temp_word, root);
    }


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