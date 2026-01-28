#include<iostream>
using namespace std;

int main()
{
    // For integer --> 4 bit

    int x = 10;
    int* ptr1 = &x;

    cout<<ptr1<<endl;

    ptr1 = ptr1 + 1;

    cout<<ptr1<<endl;

    cout<<"================"<<endl;

    // for boolean ---> 1 bit

    bool flag = true;

    bool* ptr = &flag;

    cout<<ptr<<endl;
    
    ptr = ptr + 1;

    cout<<ptr<<endl;

    return 0;
}