#include <iostream>
using namespace std;
#include <queue>
# include <tree_class.h>
TreeNode<int>*take_Input_Level_wise(){
    int rootData;
    cout <<"Enter the root data :";
    cin >> rootData;
    TreeNode <int> * root = new TreeNode <int> (rootData);
    queue <TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0){
        TreeNode <int> * front = pendingNodes.front();
        pendingNodes.pop();

        int childs;
        cout << "Enter the number of childrens of " << front -> data << " ";
        cin >> childs;

        for ( int i = 0; i < childs; i++){
            int childData;
            cout << "Enter " << i << "th child of " << front -> data <<" ";  //doubt
            cin >> childData;

            TreeNode <int> * childs = new TreeNode <int> (childData);
            front -> childern.push_back(childs);
            pendingNodes.push(childs);
        }   
    }
    return root;
}