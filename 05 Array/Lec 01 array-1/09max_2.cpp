// Find the maximum value out of all the element in the array.

// method-2

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];

    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    cout<<max<<endl;  

    return 0;
}