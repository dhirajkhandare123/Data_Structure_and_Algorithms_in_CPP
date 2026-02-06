// create array store given array element in reverse form into
// another array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int rev[5];
    int n=4;

    cout<<"array : ";

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<5;i++){
        rev[i] = arr[n];
        n-=1;
    }

    cout<<"Reverse array : ";

    for(int i=0;i<5;i++){
        cout<<rev[i]<<" ";
    }
    return 0;
}