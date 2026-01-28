#include<iostream>
using namespace std;

int main()
{
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl;  // at this address 4 is store.
    ptr = ptr + 1;
    cout<<*ptr<<endl;   // at this address garbage value
                        // is store.

    return 0;
}