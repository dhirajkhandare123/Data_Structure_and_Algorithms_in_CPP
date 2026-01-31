// Find the minimum value out of all elements in the array.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }

    cout<<mini;

    return 0;
}