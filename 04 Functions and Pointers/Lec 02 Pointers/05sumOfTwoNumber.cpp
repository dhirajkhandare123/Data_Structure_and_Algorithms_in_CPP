#include<iostream>
using namespace std;

int main()
{
    // int x = 3;
    // int y = 4;

    // int* p1 = &x;
    // int* p2 = &y;

    // cout<<*p1 + *p2<<endl;

    int x,y;
    int* p1=&x;
    int* p2=&y;

    cout<<"Enter num1: ";
    cin>>*p1;
    cout<<"Enter num2: ";
    cin>>*p2;

    // cout<<"Sum is "<<x + y<<endl;
    cout<<*p1 + *p2<<endl;

    return 0;
}