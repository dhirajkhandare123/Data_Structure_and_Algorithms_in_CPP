// Given two strings s and t return true if t is an anagram of s,
// and false otherwise.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t) cout<<true<<endl;
    else cout<<false<<endl;
    return 0;
}