#include<bits/stdc++.h>
using namespace std;

int buy_Ticket(int *arr , int n , int k){
    priority_queue<int>pq;
    queue<int> q;

    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
        q.push(i);
    }

    int time = 0;
    while(true){
        if (pq.top() == arr[q.front()] && k == q.front()){
            time++;
            break;
        }else if (pq.top() == arr[q.front()]) {
            time++;
            pq.pop();
            q.pop();
        }else{
            q.push(q.front());
            q.pop();
        }
    }
    return time;
}
int main(){
    // int n ;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // int k;
    // cin >> k;
    int arr[] = {2,2,2,2,4};

    cout << buy_Ticket(arr, 5, 2);

    //delete[] arr;
}