// binary search in array

#include<iostream>
using namespace std;

int main()
{
    int arr[7];

    cout<<"Enter array : "<<endl;
    for(int i=0;i<7;i++){
        cout<<"Enter : ";
        cin>>arr[i];
    }

    //print array

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter element you want to search : ";
    int n;
    cin>>n;

    for(int i=0;i<7;i++){
        if(arr[i]==n){
            cout<<"The element at "<<i<<"th index."<<endl;
            cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
            break;
        }
    }

    return 0;
}