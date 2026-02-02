// Size and sizeof operator (How can we use it to find the
// length of array. )

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,13,45,13,53,66,42,21,56,78,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<size;
    return 0;
}