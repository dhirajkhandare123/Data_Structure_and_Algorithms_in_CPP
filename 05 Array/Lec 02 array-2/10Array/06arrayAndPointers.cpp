#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    int* ptr = arr; // giving address of first element.

    cout<<*ptr<<endl; // print value
    cout<<ptr<<endl; // print address

    ptr[0] = 11;

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    // also we can print like this

    for (int i = 0; i < 5; i++){
        cout<<ptr[i]<<" ";
    }
    

    return 0;
}