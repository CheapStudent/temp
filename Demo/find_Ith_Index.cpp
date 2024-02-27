#include <iostream>
using namespace std;
#include "linkllist_Node.cpp"
// int main()
// {

    void ith_Index(Node * head, int i){
        int index = 0;
        Node *current = head;
        while (current != NULL && index < i)
        {
            index++;
            current = current->next;
        }
        if (current != NULL)
        {
            cout << current->data;
        }
    }
// int main()
// {
//     Node *takeinput()
//     {
//         int data;
//         cin >> data;
//         Node *head = NULL, *tail = NULL;
//         while (data != -1)
//         {
//             Node *newNode = new Node(data);
//             if (head == NULL)
//             {
//                 head = newNode;
//                 tail = newNode;
//             }
//             else
//             {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//             cin >> data;
//         }
//         return head;
//     }

//     // int main()
//     // {
//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     Node *head = takeinput();
//     //     int pos;
//     //     cin >> pos;
//     //     printIthNode(head, pos);
//     //     cout << endl;
//     // }
//     return 0;
//}