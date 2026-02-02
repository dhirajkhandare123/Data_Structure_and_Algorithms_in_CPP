// Find the maximum value out of all the element in the array.

// method-1

#include<iostream>
using namespace std;

int main()
{

    int arr[] = {9,100,1,2,102,4,5,6};
    // size of array
    int size = sizeof(arr)/sizeof(arr[0]);
    // extra variable.
    int max = arr[0];
    //loop
    for(int i=1;i<size;i++){
        // condition
        if(max<arr[i]){
            max = arr[i];
        }
    }
    // print maximum element.
    cout<<max<<endl;  // 102

    return 0;
}