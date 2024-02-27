#include <iostream>
using namespace std;
#include "linkllist_Node.cpp"

Node *takeInput (){
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while (data != -1){
        Node *newNode = new Node (data);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail -> next; 
            //Or tail = newNode;


            // Node * temp = head;
            // while (temp -> next != NULL)
            // {
            //     temp = temp -> next;
            // }
            // temp ->next = newNode;
        }
        cin >> data;
    }
    return head;
}

void print (Node *head){
    while (head != NULL){
        cout << head ->data <<" ";
        head = head ->next;
    }
}
int lenght(Node *head){
    int len = 0;
    while (head != NULL){
        len++;
        head = head ->next;
    }
    return len;

}
int main (){
    Node *head = takeInput();

    print (head);
}