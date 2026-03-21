#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str ="dhiraj khandare";

    cout<<str.size()<<endl;// to find lemgth.

    cout<<str.length()<<endl;// to find lemgth.

    string str1 ="abcd";
    // cout<<str1<<endl;
    // str1.push_back('e');    
    // str1.push_back('f');    
    // str1.push_back('hjfk'); //error   
    // cout<<str1<<endl;

    str1.pop_back();
    // cout<<str1<<endl;

    // "+" operator
    string s = "abc";
    // cout<<s<<endl;
    string t = "def";
    s =s+t;
    // cout<<s<<endl;
    s= s + "namo";  // add
    s = "namo" + s;  // add
    // cout<<s<<endl;

    string s1 = "abcdef";
    cout<<s1<<endl;
    // reverse(s1.begin(),s1.end());  // to use import algorithm header file
    // reverse(s1.begin()+2,s1.end());
    reverse(s1.begin(),s1.end()-2);
    cout<<s1<<endl;
    return 0;
}