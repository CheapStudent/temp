#include <iostream>
using namespace std;
#include "stack.cpp"

int main (){
   
    //StackUsingArray s(4);
    StackUsingArray <char> s;
    s.push(100);
    s.push(101);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
} 