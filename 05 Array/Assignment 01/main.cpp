// Find the minimum value out of all elements in the array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {91,96,92,99,90,93};
    int n = sizeof(arr)/sizeof(arr[0]);

    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<mini<<endl;
    
}