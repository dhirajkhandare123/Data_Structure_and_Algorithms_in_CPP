// Write a program to reverse the array without using any
// extra array.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(25);
    v.push_back(5);
    v.push_back(10);
    v.push_back(90);

    display(v);

    // reverse
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        // swap -> v[i] and v[j]
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    display(v);

    return 0;
}