#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<list>
//#include<unordered_map>
using namespace std;

class Hashing{
    vector<list<int>> hashTable;
    int buckets;
    int size; // size of hashtable 
    public:

    Hashing(int size){
        buckets = size;
        hashTable.resize(size);
    }

    // find hashcode or hash value 

    int hashValue(int key){
        return key % buckets;
    }


    // insert an element
    void insertElement(int key){
        int index = hashValue(key);
        hashTable[index].push_back(key);
        size++;
    }

    // Search an Element

    list<int>::iterator searchElement(int key){
        int index = hashValue(key);
        return find(hashTable[index].begin(), hashTable[index].end() , key);
    }

    void deleteElement(int key){
        int index = hashValue(key);
        if (searchElement(key) != hashTable[index].end()){
            hashTable[index].erase(searchElement(key));
            cout << key <<"  is deleted"<<endl;
            size--;
        }else{
            cout <<" key is not present in the Hash table"<< endl;
        }
    }
    int sizeElement(){
    
        return size;
    }
};

int main (){
    Hashing h(10);
    h.insertElement(10);
    h.insertElement(11);
    h.insertElement(12);
    h.insertElement(13);
    h.insertElement(14);
    h.insertElement(15);
    h.insertElement(16);
    // for (int i = 0; i < h.sizeElement(); i++){
    //     cout << h.searchElement(10) <<" ";
    // }
    h.deleteElement(11);
    h.deleteElement(11);
    return 0;

}