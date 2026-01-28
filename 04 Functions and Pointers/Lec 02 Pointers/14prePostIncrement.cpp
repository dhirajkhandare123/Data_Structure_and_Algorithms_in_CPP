#include<iostream>
using namespace std;

int main()
{
    cout<<"Pre increment"<<endl;
    int a=15;
    int* ptr1=&a;
    int b = ++(*ptr1);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;

    cout<<"Post increment"<<endl;
    int x=15;
    int* ptr2=&x;
    int y = (*ptr2)++;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
    return 0;
}