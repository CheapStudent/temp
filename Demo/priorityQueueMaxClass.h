#include<bits/stdc++.h>
using namespace std;

class PriorityQueueMax{
    vector<int>pq;

    public:

    PriorityQueueMax(){

    }

    void insert (int element){
        pq.push_back(element);

        int childIndex = pq.size() - 1;
        while (childIndex > 0){
            int parentIndex = (childIndex - 1) / 2;
            if (pq[parentIndex] < pq[childIndex]){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childIndex];
                pq[childIndex] = temp;
            }
            childIndex = parentIndex;
        }
    }

    bool isEmpty(){
        return pq.size() == 0;
    }

    int getMax(){
        if (isEmpty()){
            return 0;
        }
        return pq[0];
    }

    int getSize(){
        return pq.size();
    }

    int removeMax (){
        int result = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < pq.size()){
            int maxIndex = parentIndex;

            if (pq[maxIndex] < pq[leftChildIndex]){
                maxIndex = leftChildIndex;
            }
            if(rightChildIndex < pq.size() && pq[maxIndex] < pq[rightChildIndex]){
                maxIndex = rightChildIndex;
            }

            if (maxIndex == parentIndex){
                break;
            }

            int temp = pq[maxIndex];
            pq[maxIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = maxIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return result;
    }
};

















