#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printMax(int arr[],int n,int idx,int max_val){
    if(idx==n){
        cout<<"Maximum: "<<max_val<<endl;
        return;
    }
    if(arr[idx]>max_val) max_val=arr[idx];
    printMax(arr,n,idx+1,max_val);
}

int displayMax(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx], displayMax(arr,n,idx+1));
}

int main()
{
    int arr[]={54,12,1,18,7,25,45,333,10,8,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);

    cout<<"Max Value: "<<displayMax(arr,n,0);
    return 0;
}