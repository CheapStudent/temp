#include<bits/stdc++.h>
using namespace std;
#include"priorityQueueMaxClass.h"

int main (){
    PriorityQueueMax p;
    p.insert(10);
    p.insert(20);
    p.insert(30);
    p.insert(40);
    p.insert(50);
    p.insert(60);
    p.insert(70);
    p.insert(100);
    p.insert(0);
    p.insert(105);

    cout << "Size : "  << p.getSize() << endl;
    cout <<"Maximum Element :" << p.getMax() << endl;
    while (p.getSize() != 0){
        cout << p.removeMax() <<" ";
    }
}