#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> ourmap;
    ourmap["abc"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 5;
    ourmap["abc5"] = 16;

    unordered_map<string, int>::iterator it = ourmap.begin();

    while (it != ourmap.end())
    {
        cout << "key  " << it->first << "    "
             << "Value  " << it->second << endl;
        it++;
    }

    vector<int>v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);
    vector<int>::iterator it1 = v.begin();
    while (it1 != v.end())
    {
        cout << "vector  " <<*it1<<endl;
        it1++;
    }
    
/*
    unordered_map<string, int>::iterator it2 = ourmap.find("abc");
    //ourmap.erase(it2);
    while (it2 != ourmap.end())
    {
        //ourmap.erase(it2);
        cout << "keyF" <<"   " << it2->first << "  " << "valueF" <<"  "<< it2->second << endl;
        it2++;
    }

    // ourmap.erase(it2); */
}