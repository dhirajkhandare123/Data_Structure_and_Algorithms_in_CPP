// Given a sorted array of non-negative distinct integers,
// find the smallest missing non-negative element in it.

// brute force method
// Time complexity is O(logn)
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,8,9,11};
    int n=9;

    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == mid){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
    return 0;
}