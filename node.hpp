/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include <vector>
struct Node {
    char key; // this will be the first character of the strings, aka what the tree sorty by
    Node* left;
    Node* right;
    vector<string> elements; // list of strings starting with the key
};