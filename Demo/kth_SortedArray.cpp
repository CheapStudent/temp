#include<bits/stdc++.h>
using namespace std;

void kth_Sorted_Array(int input[] , int n , int k){
    priority_queue<int>pq;

    for (int i = 0; i < k; i++){
        pq.push(input[i]);
    }

    int j = 0;

    for (int i = k; i < n; i++){
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }

    while(! pq.empty()){
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}
int main (){
    int arr[] = {10 , 12, 6 , 7 , 9};

    int k = 3;

    kth_Sorted_Array(arr, k , 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
}