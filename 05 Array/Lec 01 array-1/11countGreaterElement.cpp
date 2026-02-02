// count greater element in the array greater than a given 
// number x.

#include<iostream>
using namespace std;

int main()
{
    int n,num;

    cout<<"Enter element : ";
    cin>>num;

    cout<<"Enter size : ";
    cin>>n;
    int arr[n];

    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        if(num<arr[i]){
            count++;
        }
    }
    
    cout<<"count = "<<count<<endl;

    return 0;
}