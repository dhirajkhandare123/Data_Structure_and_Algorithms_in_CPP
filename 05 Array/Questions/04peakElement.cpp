// Find out the peak element from array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,1,1,2,3,3,2,4,3,1,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(i!=0){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                cout<<arr[i]<<" ";
            }
        }
        else{
            if(arr[i]>arr[i+1]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}