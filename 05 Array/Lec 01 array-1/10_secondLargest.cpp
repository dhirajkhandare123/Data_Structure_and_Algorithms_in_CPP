// Find the second largest element in the array.

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
    

    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    
    cout<<"Largest : "<<max<<endl;  
    cout<<"Second Largest : "<<smax<<endl;  

    return 0;
}