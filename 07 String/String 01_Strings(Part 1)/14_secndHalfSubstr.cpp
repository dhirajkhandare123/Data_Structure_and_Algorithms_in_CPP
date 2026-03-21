// Input a string of even length and return the second half of that
// string using inbuilt substr function.

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    getline(cin,str); // abcdefh
    int n = str.length();
    cout<<str.substr(n/2)<<endl;
    return 0;
}