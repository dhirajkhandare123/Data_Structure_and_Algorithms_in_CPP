#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    int*** q = &p;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl; //double pointer
    cout<<***q<<endl; //triple pointer

    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl;

    return 0;
}