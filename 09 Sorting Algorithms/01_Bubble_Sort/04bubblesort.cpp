#include<iostream>
using namespace std;

int main()
{
    int arr[] = {99,4,5,33,-9,0,2,3};
    int n=8;
    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Bubble sort
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){ // swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}