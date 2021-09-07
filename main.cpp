#include <iostream>
#include <algorithm>
#include "tree.hpp"

using namespace std;

int main(int argc, char** argv){

    string buffer = "";

    if (argc > 2) {
        cout << "ERROR: Too many arguments provided...\n exiting program now\n\n";
        return 0;
    }
    else if (argc == 2) buildTree(1, argv[1]);
    else {
        //  this handles the cases where either keyboard input is used or input redirection through stdin is used
        cout << "Enter the strings that will be inserted into the bst. Enter 'eof' when finished\n";
        for (string line; cin >> line;) {
            system("clear");
            string temp = line;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            if (temp != "eof") buffer += (line + ' ');
            else break;
        }
        buildTree(0, "", buffer);
    }


    printInorder();
    printPreorder();
    printPostorder();

    return 0;
}

