#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream codes;
    int choice = 0;
    codes.open("codes.txt");
    if (codes.good()){
        string tempC;
        while (getline(codes, tempC)){
            tree.insertNode(tempC);
        }
    }
    codes.close();
    //tree.displayInOrder();
    while (choice != 4){
        cout << "BST Menu" << endl;
        cout << "[1] Add Code" << endl;
        cout << "[2] Delete Code" << endl;
        cout << "[3] Search Tree" << endl;
        cout << "[4] Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                string tempC;
                cout << "Enter code to add: ";
        }
    }
    return 0;
}