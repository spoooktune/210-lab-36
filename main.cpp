#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    tree.insertNode(4);
    tree.insertNode(5);
    tree.insertNode(3);
    tree.displayInOrder();
    cout << endl;
    tree.displayPreOrder();
    cout << endl;
    tree.displayPostOrder();
    return 0;
}