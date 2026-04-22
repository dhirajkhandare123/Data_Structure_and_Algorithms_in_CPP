// Given a sorted integer array and an integer 'x', find the
// lower bound of x.
// (using BinarySearch).
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 12;

    int low=0;
    int high=n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == x) {
            cout<<arr[mid];
            flag=true;
        }
        else if(arr[mid] < x) low = mid + 1;
        else if(arr[mid] > x) high = mid -1;

    }
    
    if(flag==false) cout<<arr[high];

    return 0;
}