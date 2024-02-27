#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//# include "binaryTreeKUse.h"
#include "binaryTree.cpp"
/*
class IsBSTReturn {
    public:
    int minimum;
    int maximum;
    bool isBST;
};

IsBSTReturn isBST2 (BinaryTreeNode <int> * root){
    if (root == nullptr){
        IsBSTReturn output;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        output.isBST = true;
    }

    IsBSTReturn leftOutput = isBST2(root -> left);
    IsBSTReturn rightOutput = isBST2(root -> right);

    int minimum = min(root -> data , min (leftOutput.minimum , rightOutput.minimum));
    int maximum = max(root -> data , max (leftOutput.maximum , rightOutput.maximum));
    bool isBSTFinal = (root -> data > leftOutput.maximum) && (root -> data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;

    IsBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;

    return output;

}
*/

bool isBST3 (BinaryTreeNode <int> *root , int min = INT_MIN , int max = INT_MAX){
    if (root == nullptr) return true;

    if (root -> data < min || root -> data > max){
        return false;
    }

    bool leftTreeIsTrue = isBST3 (root -> left , min , root -> data -1);
    bool rightTreeIstrue = isBST3 (root -> right , root -> data , max);

    return leftTreeIsTrue && rightTreeIstrue;

}

int main (){
    BinaryTreeNode <int> * root = takeInputLevelWise();
    //cout<<isBST2(root);
   // cout << output <<" ";
   cout << isBST3 <<" ";
    delete root;
    //return output;
}