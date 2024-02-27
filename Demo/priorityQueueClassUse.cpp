#include<bits/stdc++.h>
using namespace std;
#include"priorityQueueClass.h"

int main (){
    PriorityQueue p;
    p.insertElement(10);
    p.insertElement(20);
    p.insertElement(30);
    p.insertElement(40);
    p.insertElement(50);
    p.insertElement(60);
    p.insertElement(70);
    p.insertElement(100);
    p.insertElement(0);
    p.insertElement(105);

    cout << "Size : "  << p.getSize() << endl;
    cout <<"Minimum Element :" << p.getMin() << endl;
    while (p.getSize() != 0){
        cout << p.removeMin() <<" ";
    }
}