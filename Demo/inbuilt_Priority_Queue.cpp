#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
  //  priority_queue<int>pq;  //this inbuilt function given the element in descending order
   priority_queue<int , vector<int> , greater<int>>pq; // this inbuilt function given the element in ascending order;

    pq.push(100);
    pq.push(0);
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout << pq.empty() << endl;
    cout <<"Size  " << pq.size() <<endl;
    cout <<"Top  " << pq.top() << endl;

    while(!pq.empty()){
        cout<<pq.top() <<"   ";
        pq.pop();
    }

}