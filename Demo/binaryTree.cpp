# include <iostream>
# include <queue>
# include "binaryTreeKUse.h"
using namespace std;

BinaryTreeNode<int> * takeInputLevelWise(){
    int rootData;
    cout << "Enter root data : " << endl;
    cin >> rootData;
    if (rootData == -1){
        return nullptr;
    }

    BinaryTreeNode <int> * root = new BinaryTreeNode <int> (rootData); ///// make a root node
    queue<BinaryTreeNode<int>*> pendingNodes;  //// create a queue
    pendingNodes.push(root);

    while (pendingNodes.size() != 0){   //// size queue
        BinaryTreeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();

        cout <<"Enter the left child  of " << front -> data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1){
            BinaryTreeNode <int> *child = new BinaryTreeNode <int> (leftChildData);
            front -> left = child;
            pendingNodes.push(child);
        }

        cout <<"Enter the right child  of " << front -> data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1){
            BinaryTreeNode <int> *child = new BinaryTreeNode <int> (rightChildData);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree (BinaryTreeNode <int> * root){
    if (root == nullptr) return;
    cout << root -> data <<": ";
    if (root -> left != nullptr){
        cout << " L " << root -> left -> data;
    }

    if (root -> right != nullptr){
        cout << "  R " << root -> right -> data;
    }

    cout << endl;
    printTree (root -> left);
    printTree (root -> right);
}


int main () {
    BinaryTreeNode <int> * root = takeInputLevelWise();
    printTree(root);
    delete root;
}