// Find the minimum value out of all elements in the array.

#include<iostream>
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

    int mini = arr[0];

    for(int i=0;i<n;i++){
        mini = min(mini,arr[i]);
    }

    cout<<mini;

    return 0;
}