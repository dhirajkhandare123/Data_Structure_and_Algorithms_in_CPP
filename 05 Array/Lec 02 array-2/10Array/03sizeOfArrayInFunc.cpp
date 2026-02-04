#include<iostream>
using namespace std;
// declaration
void display(int a[], int size){
    // int size = sizeof(a)/sizeof(a[0]); // this gives--> 
    
//( warning: 'sizeof' on array function parameter 'a' will return 
// size of 'int*' )

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    return 0;
}