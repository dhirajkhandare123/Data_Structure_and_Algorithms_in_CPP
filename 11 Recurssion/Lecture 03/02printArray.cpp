// Traversing an array using recursion
//  Print all the elements of an array

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    printArray(arr,n,idx+1);
}

void printvector(vector<int>&v, int idx){
    if(idx == v.size()) return;
    cout<<v[idx]<<" ";
    printvector(v,idx+1);
}

int main()
{
    int arr[] = {1,4,3,1,2,3,2,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n,0);
    cout<<endl;

    vector<int>v={12,11,2,1,32,21};
    printvector(v,0);
    return 0;
}