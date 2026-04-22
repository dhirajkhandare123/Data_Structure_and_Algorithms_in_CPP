// Given a sorted binary array, efficiently count the total number 
// of 1’s in it.
//  Input 1 : a = [0,0,0,0,1,1]
//  Output 1: 2

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=1;

    int lo=0;
    int hi=n-1;
    int first=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                first=mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }

    int ans=(n-1)-first+1;
    cout<<ans;
    return 0;
}