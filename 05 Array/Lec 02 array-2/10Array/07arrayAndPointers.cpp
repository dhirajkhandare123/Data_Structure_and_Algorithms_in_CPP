#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;

    cout<<*ptr<<endl; // print ---> 1 
    // cout<<*ptr[0]<<endl; // error


    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";



    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<"\n";



    *ptr = 8;  // ptr[0] = 8;

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";




/*

    for(int i=0;i<5;i++){
        cout<<*ptr[i]<<" ";
    }
    cout<<"\n";


    // The above code gives error
    // Because (cout<<*ptr[0];) is not recomended
*/


    return 0;
}