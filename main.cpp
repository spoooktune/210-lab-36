#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream codes;
    string tempC;
    int choice = 0;
    codes.open("codes.txt");
    if (codes.good()){
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

        bool search;
        switch(choice){
            case 1:
                cout << "Enter code to add: ";
                cin >> tempC;
                tree.insertNode(tempC);
                cout << "Code " << tempC << " added" << endl;
                break;
            case 2:
                cout << "Enter code to delete: ";
                cin >> tempC;
                tree.remove(tempC);
                cout << "Code " << tempC << " deleted" << endl;
                break;
            case 3:
                cout << "Enter code to search for: ";
                cin >> tempC;
                search = tree.searchNode(tempC);
                if (search){
                    cout << "Code " << tempC << "was found" << endl;
                }
                else{
                    cout << "Code " << tempC << " was not found" << endl;
                }
                break;
            case 4:
                cout << "Exiting Menu";
                break;
            default:
                cout << "Invalid choice entered" << endl;
        }
    }
    return 0;
}