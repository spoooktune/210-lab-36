#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream codes;
    codes.open("codes.txt");
    if (codes.good()){
        string tempC;
        while (getline(codes, tempC)){
            tree.insertNode(tempC);
        }
    }
    codes.close();
    tree.displayInOrder();
    return 0;
}