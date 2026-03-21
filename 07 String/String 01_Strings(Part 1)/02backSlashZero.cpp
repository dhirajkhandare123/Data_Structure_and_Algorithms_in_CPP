#include<iostream>
using namespace std;
// last element is \0
int main()
{
    // char ch = '\0';
    // cout<<ch<<endl;
    // cout<<(int)ch<<endl;
    // __________________________
    // |a|b|c|d|e|\0|\0|\0|\0|\0|
    // --------------------------

    char str[10] = {'a','b','c','d','e'};
    cout<<str[0]<<endl;
    cout<<str[5]<<endl;
    cout<<(int)(str[0])<<endl;
    cout<<(int)(str[5])<<endl;


    return 0;
}