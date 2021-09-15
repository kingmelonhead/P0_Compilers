/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include <vector>
#include <string>
struct Node {
    char key; // this will be the first character of the strings, aka what the tree sorty by
    Node* left;
    Node* right;
    std::vector<std::string> elements; // list of strings starting with the key
};