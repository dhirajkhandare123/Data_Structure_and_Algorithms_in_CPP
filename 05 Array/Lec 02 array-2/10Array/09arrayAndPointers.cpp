#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int* ptr=arr;

    for(int i=0;i<7;i++){
        cout<<ptr[i]<<" ";
    }   
    cout<<endl;



    *ptr = 8;
    ptr++;  // ptr pointing 2nd element
    *ptr = 9;
    ptr--;  // ptr pointing 1st element

    for(int i=0;i<7;i++){
        cout<<ptr[i]<<" ";
    }   
    cout<<endl;


    return 0;
}