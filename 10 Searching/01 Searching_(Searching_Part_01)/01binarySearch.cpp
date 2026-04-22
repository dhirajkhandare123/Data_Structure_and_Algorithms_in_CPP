#include<iostream>
using namespace std;
// binary search.
int binarySearch(int arr[],int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target == arr[mid]) return mid;
        if(target < arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=6;

    int ans = binarySearch(arr,n,x);
    if(ans == -1){
        cout<<"Not found";
    }
    else{
        cout<<"Found at: "<<ans;
    }
    return 0;
}