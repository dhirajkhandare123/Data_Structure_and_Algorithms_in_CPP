// to_string()  --> it converts integer to string.

#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int x = 12345;
    string str = to_string(x);
    cout<<str<<endl;
    cout<<str.length()<<endl;

    return 0;
}