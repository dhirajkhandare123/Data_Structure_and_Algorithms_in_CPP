// calculate sum of all the elements in the given array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;

    // declaration
    int arr[n];

    // input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //take extra variable.
    int sum=0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    cout<<"SUM = "<<sum<<endl;
    return 0;
}