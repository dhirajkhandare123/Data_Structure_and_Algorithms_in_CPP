#include<bits\stdc++.h>
using namespace std;

int main()
{
    int arr[] = {66,11,22,-44,90};
    int n=5;

    for(int i=0;i<n-1;i++){
        int mini=INT_MAX;
        int midx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                midx=j;
                mini=arr[j];
            }
        }
        swap(arr[i],arr[midx]);
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}