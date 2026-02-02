#include<iostream>
using namespace std;

int main()
{
    // declaration
    // int A[7];  // 0 1 2 3 4 5 6
    // A[0]=10;   // initialization
    // A[1]=11;  //    .
    // A[2]=12;   //   .
    // A[3]=13;   //   .
    // A[4]=14;   //   .
    // A[5]=15;   //   .
    // A[6]=16;   //   .

    // cout<<A[5]<<endl;
    // A[5]=20;
    // cout<<A[5]<<endl;
//.................................................................
    
    // int arr[7] = {0,1,2,3,4,5,6};
    // cout<<arr[4]<<endl;
// If size is n then there are indices are (n-1).
//.................................................................
    // int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    // cout<<arr[10]<<endl;
    
//.................................................................
    // using for loop.
    int x;
    cin>>x;
    int arr[x];
    // Input Loop.
    for(int i=0;i<x;i++){
        cout<<"Enter : ";
        cin>>arr[i];
    }
    
    // Output Loop.
    cout<<"You Enter: ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}