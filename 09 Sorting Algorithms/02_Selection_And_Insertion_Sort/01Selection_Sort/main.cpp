#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={3,4,1,2,5};
    int n=5;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        int mini=INT_MAX;
        int midx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                mini=arr[j];
                midx=j;
            }
        }
        swap(arr[i],arr[midx]);
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}