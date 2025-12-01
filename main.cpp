#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    ifstream codes;
    codes.open("codes.txt");
    if (codes.good()){
        cout << "File is open" << endl;
    }
    codes.close();
    IntBinaryTree tree;
    tree.insertNode("bc");
    tree.insertNode("ab");
    tree.insertNode("cd");
    tree.displayInOrder();
    cout << endl;
    tree.displayPreOrder();
    cout << endl;
    tree.displayPostOrder();
    return 0;
}