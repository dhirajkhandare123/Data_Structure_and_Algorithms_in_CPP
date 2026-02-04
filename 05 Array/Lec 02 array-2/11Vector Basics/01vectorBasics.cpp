#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;   // No need to mentionm size
    // inserting / input do not use ----> []
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // update
    v[0] = 99;

    // If you want to update / access.
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    
    return 0;
}