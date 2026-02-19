#include<iostream>
using namespace std;

int main()
{
    // Declaration and initialization
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr1[0][0]<<endl;
    cout<<arr1[1][2]<<endl;

    int arr2[3][3];
    // rows -> 3    0-2
    // columns -> 3     0-2

    arr2[0][0]=4;
    cout<<arr2[0][0]<<endl;


    int arr3[3][3]={1,2,3,4,5,6,7,8,9};
    

    return 0;
}