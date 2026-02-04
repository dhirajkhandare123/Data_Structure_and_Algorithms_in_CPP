// Write a program to copy the contents of one array
// into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(10);
    v.push_back(5);
    v.push_back(25);
    v.push_back(30);

    vector<int> rev(v.size());

    for(int i=v.size()-1;i>=0;i--){
        int x = v[i];
        rev.push_back(x);
    }

    for(int i=0;i<rev.size();i++){
        cout<<rev[i]<<" ";
    }
    cout<<endl;
    return 0;
}