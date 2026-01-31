// Calculate the product of all the elements in the given array.

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

    // variable
    int product=1;

    for(int i=0;i<n;i++){
        product=product*arr[i];
    }

    cout<<product<<endl;

    return 0;
}