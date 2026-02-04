#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    // int* ptr1 = &arr;  // ---> Error ( Not recommended )
    // int* ptr2 = arr[0] // integer value (error)
    int* ptr = arr;  // ---> ( recommended )


    cout<<&arr<<endl;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0]<<endl;

    // Errors



    return 0;
}