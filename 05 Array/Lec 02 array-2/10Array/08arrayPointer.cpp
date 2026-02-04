#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int* ptr=arr;

    // for(int i=0;i<7;i++){
    //     cout<<ptr[i]<<" ";
    // }   
    // cout<<endl;

    for(int i=0;i<7;i++){
        cout<<*ptr<<" ";
        ptr++;
    }  

    ptr=arr;  // ptr is pointing first element.
    cout<<endl;


//-----------------------------------------------
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;

    for(int i=0;i<7;i++){
        cout<<ptr[i]<<" ";
    }   
    cout<<endl;


    return 0;
}