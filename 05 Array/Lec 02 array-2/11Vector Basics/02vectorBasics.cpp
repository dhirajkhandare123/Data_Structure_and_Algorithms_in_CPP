#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v[1]=2;  // gives garbage value hence not recommended.
    v.push_back(3);
    v.push_back(4);

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

    // Expected output is : 1 2 3 4
    // But it gives : 1 3 4 1550872436
    
    return 0;
}