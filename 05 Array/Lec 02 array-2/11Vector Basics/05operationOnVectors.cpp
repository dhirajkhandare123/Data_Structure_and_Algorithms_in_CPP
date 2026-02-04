#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // pop operation from back
    v.pop_back();
    v.pop_back();  // size updates automatically but capacity not.

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}