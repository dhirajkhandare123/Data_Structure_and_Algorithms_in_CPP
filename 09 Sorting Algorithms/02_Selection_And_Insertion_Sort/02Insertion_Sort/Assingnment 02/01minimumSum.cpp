// Given an array of digits (values are from 0 to 9), the task is to 
// find the minimum possible sum of two numbers formed from digits of 
// the array. Please note that all digits of the given array must be 
// used to form the two numbers

#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,1,5,5,2,3};
    int n=6;
    // insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    // storing the sorted array into an integer.
    int x=0;
    for(int i=0;i<n;i++){
        x *= 10;
        x += arr[i];
    }
    cout<<x<<endl;

    // for second minimum we need to change sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }

    // storing the sorted array into an integer.
    int y=0;
    for(int i=0;i<n;i++){
        y *= 10;
        y += arr[i];
    }
    cout<<y<<endl;

    cout<<"Minimum Sum is: "<<(x+y)<<endl;
    return 0;
}