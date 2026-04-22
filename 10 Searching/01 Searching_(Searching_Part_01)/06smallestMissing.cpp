// Given a sorted array of non-negative distinct integers,
// find the smallest missing non-negative element in it.

// brute force method
// Time complexity is O(n)
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,9,10,11};
    int n=8;

    for(int i=0;i<n;i++){
        if(i!=arr[i]) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}