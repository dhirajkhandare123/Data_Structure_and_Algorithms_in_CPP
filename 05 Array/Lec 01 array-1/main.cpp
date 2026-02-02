#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[7]={100,212,322,121,255,444,887};
    int size=sizeof(arr)/sizeof(arr[0]);

    int mx = INT_MIN;

    for(int i=0;i<size;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }

    int smx = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]!=mx && arr[i]>smx){
            smx=arr[i];
        }
    }
    cout<<"Max: "<<mx<<endl;
    cout<<"Second Largest: "<<smx<<endl;
    return 0;
}