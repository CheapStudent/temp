#include <iostream>
using namespace std;
#include "linkllist_Node.cpp"
void print (Node *head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
void increment (Node *head ){
    Node * temp = head;
    while (temp != NULL){
        temp -> data++;
        temp = temp -> next;
    }
}
int main (){
    Node *n1 = new Node(10);
    //Node * head = n1;
    Node * n2 = new Node (20);
    Node * n3 = new Node (30);
    Node * n4 = new Node (40);
    // Node * n5 = new Node (5000);
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    // n4-> next = n5;
    //increment(n1);
    print (n2);
/*
  Node n1(10);
  Node *head = &n1;
  Node n2(20);
  Node n3(30);
  Node n4(40);
  Node n5(50);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  print(head);
*/

}
