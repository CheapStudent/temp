#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int * arr , int size){
    vector<int>output;
    unordered_map<int , bool> Ravindra;
    for (int i = 0; i < size ; i++){
        if(Ravindra.count(arr[i]) > 0){
            continue;
        }
        Ravindra[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main(){
    int arr[] = {1,2,3,4,4,5,3,2,5,6,4};
    vector<int>output = removeDuplicates(arr,11);
    for (int i = 0; i < output.size(); i++){
        cout<<output[i] <<"    ";
    }
}