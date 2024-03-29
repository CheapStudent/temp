
#include<bits/stdc++.h>
using namespace std;

void inplaceHeapSort(int input[] , int n){
    // 7 9 4 6 1 0

    for (int i = 1; i < n; i++){
        int childIndex = i;
        // int parentIndex = (childIndex - 1) / 2;

        while (childIndex > 0){
            int parentIndex = (childIndex - 1) / 2;
            if (input[childIndex] < input[parentIndex]){
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    int size = n;
    while (size > 0){
        int temp = input[0];
        input[0] = input[size - 1];
        input[size - 1] = temp;
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < size){
            int minIndex = parentIndex;
            if (input[minIndex] > input[leftChildIndex]){
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < size && input[minIndex] > input[rightChildIndex]){
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex){
                break;
            }

            int temp = input[minIndex];
            input[minIndex] = input[parentIndex];
            input[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }
}

int main(){
    int input[] = {9 , 4 , 5 , 0 , 11 , 7};
    inplaceHeapSort(input , 6);

    for (int i = 0; i < 6; i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}