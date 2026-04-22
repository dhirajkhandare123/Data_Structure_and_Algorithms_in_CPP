
#include<iostream>
using namespace std;

int countNumber(int arr[], int n, int x){
    int lo=0;
    int hi=n-1;
    int count=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x) {
            arr[mid]=-1;
            hi=mid-1;
            count++;
        }
        else if(arr[mid] > x){
            hi = mid - 1;
        }
        else{// arr[mid] < x
            lo = mid + 1;
        }
    }

    // while(lo<=hi){
    //     int mid=lo+(hi-lo)/2;
    //     if(arr[mid]==x) {
    //         arr[mid]=-1;
    //         lo=mid+1;
    //         count++;
    //     }
    //     else if(arr[mid] > x){
    //         hi = mid - 1;
    //     }
    //     else{// arr[mid] < x
    //         lo = mid + 1;
    //     }
    // }
    return count;
}

int main()
{
    int arr[] = {0,0,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=1;

    cout<<countNumber(arr,n,x);
    return 0;
}