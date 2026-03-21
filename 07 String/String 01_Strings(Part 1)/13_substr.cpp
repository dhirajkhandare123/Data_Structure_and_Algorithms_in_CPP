// substr()

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "abcdef";
    // s.substr(indx,len);
    cout<<s.substr(0)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(1,3)<<endl;
    return 0;
}