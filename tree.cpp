/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include "tree.hpp"

using namespace std;

void printError() {
    cout << "ERROR: Too many arguments provided...\n exiting program now\n\n";
    exit(0);
}

void insertNode(string element, Node* root) {
    if (!isalnum(element[0]) || element == "") return;
    char this_key  = element[0];
    //check to see if this is the appropriate node
    if (this_key == root->key){
        //it is the appropriate node, so see if the element already exists
        if(std::find(root->elements.begin(), root->elements.end(), element) == root->elements.end()) root->elements.emplace_back(element); //not in vector, so add the element to the node    
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
            else insertNode(element, root->left); //left does exist
        }
        else {
            //the word needs to go to the right node
            if (root->right == NULL){
                //right doesnt exist
                root->right = new Node(this_key);
                root->right->elements.emplace_back(element);
            }
            else insertNode(element, root->right); //right does exist
        }
    }
}

Node* buildTree(int mode, string fileName){
    ifstream in_file;
    string word;
    struct Node* root;
    int index = 0, word_count = 0;
    if (mode == 0){
        //program was invoked using ./P0 somefile
        in_file.open(fileName, ios::in);
        if (in_file.is_open()){
            while (in_file >> word){
                if (word_count == 0){
                    //make root
                    root = new Node(word[0]);
                    root->elements.emplace_back(word);
                    word_count++;
                }
                else insertNode(word, root);
            }
        }
        else {
            cout << "The specified file does not exist, exiting...\n"; 
            return NULL;
        }
    }
    else {
        //program was invoked using either ./P0 or ./P0 < somefile
        for (string line; cin >> line;) {
            if (word_count == 0){
                //make root
                root = new Node(line[0]);
                root->elements.emplace_back(line);
                word_count++;
            }
            else insertNode(line, root);
        }
    }
    //if no input was found then exit
    if (word_count == 0){
        cout << "no input was given, exiting program...\n";
        return NULL;
    }
    return root;
}

void printInorder(ofstream &outFile, Node* node, int level){
    //if node is null return 
    if (node == NULL) return;
    //left tree
    printInorder(outFile, node->left, level + 1);
    //print vector
    for (int i = 0; i < node->elements.size(); i++) {
        outFile << "level " << level << ": ";
        for (int i = 0; i <= level; i++){
            outFile << "\t";
        }
        outFile << node->elements.at(i) << " ";
        outFile << endl;
    } 
    outFile << endl;
    //right tree
    printInorder(outFile, node->right, level + 1);
}

void printPreorder(ofstream &outFile, Node* node, int level){
    //if node is null return
    if (node == NULL) return;
    //print vector
    for (int i = 0; i < node->elements.size(); i++) {
        outFile << "level " << level << ": ";
        for (int i = 0; i <= level; i++){
            outFile << "\t";
        }
        outFile << node->elements.at(i) << " ";
        outFile << endl;
    } 
    outFile << endl;
    //left tree 
    printPreorder(outFile, node->left, level + 1);
    //right tree
    printPreorder(outFile, node->right, level + 1);
}

void printPostorder(ofstream &outFile, Node* node, int level){
    //if node is null return
    if (node == NULL) return;
    // left tree 
    printPostorder(outFile, node->left, level + 1);
    // right tree
    printPostorder(outFile, node->right, level + 1);
    //print vector
    for (int i = 0; i < node->elements.size(); i++) {
        outFile << "level " << level << ": ";
        for (int i = 0; i <= level; i++){
            outFile << "\t";
        }
        outFile << node->elements.at(i) << " ";
        outFile << endl;
    } 
    outFile << endl;
}