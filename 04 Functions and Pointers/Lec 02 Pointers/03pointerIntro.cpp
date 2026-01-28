// A way to store the addresses is called pointers.

// * ----> Dereference operator.
// & ----> Address of operator.

#include<iostream>
using namespace std;

int main()
{
    // int x = 4;
    // int* p = &x;

    // float x = 4.9;
    // float* p = &x;

    // bool x = true;
    // bool* p = &x;

    // cout<<&x<<endl;
    // cout<<p<<endl;

    int x=23;
    int* p = &x;

    int y=32;
    int* p2 = &y;

    cout<<p<<endl;
    cout<<p2<<endl;
    return 0;
}