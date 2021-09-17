/*
Name:       John Hackstadt
Assignmnet: P0
Prof:       Hauschild
Date:       9/15/2021
*/
#include "tree.hpp"

using namespace std;

int main(int argc, char** argv){

    Node* root_ptr;

    //determine if user provided name is used or program created name
    string filename;
    if (argc == 2) filename = argv[1];
    else filename = "default_filename";

    if (argc > 2) printError();  

    //create out files
    ofstream in_order_out (filename + ".inorder", ios::out);
    ofstream pre_order_out (filename + ".preorder", ios::out);
    ofstream post_order_out (filename + ".postorder", ios::out);

    //build trees                                      
    if (argc == 2) root_ptr = buildTree(0, argv[1]);        // ./P0 somefile            
    else root_ptr = buildTree(1);                           // ./P0  & ./P0 < somefile

    //pass ofstream and ptr to tree root to print methods
    if (root_ptr != NULL){
        printInorder(in_order_out, root_ptr);
        printPreorder(pre_order_out, root_ptr);
        printPostorder(post_order_out, root_ptr);
    }

    //clode ofstreams
    in_order_out.close();
    pre_order_out.close();
    post_order_out.close();

    //exit 
    return 0;
}

