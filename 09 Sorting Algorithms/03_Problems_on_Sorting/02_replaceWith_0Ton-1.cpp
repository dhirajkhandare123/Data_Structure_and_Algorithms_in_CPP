#include<bits\stdc++.h>
using namespace std;

int main()
{
    int arr[] = {19,12,23,8,16};
    int n=5;

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    int idx=0; // index to put in minimum position
    for(int i=0;i<n;i++){
        int mini=INT_MAX;  // to find minimum position
        int midx=-1;   
        for(int j=0;j<n;j++){
            if(arr[j]>0 && mini > arr[j]){
                midx=j;
                mini=arr[j];
            }
        }
        arr[midx]=idx;  // change with minimum element
        idx--;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){  // multiply with -1.
        arr[i]*=-1;
    }

    // final answer.
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    return 0;
}