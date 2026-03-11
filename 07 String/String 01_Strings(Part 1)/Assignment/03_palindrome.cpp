/*
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    cin>>str;

    string rev= str;
    reverse(rev.begin(),rev.end());

    if(rev==str) cout<<"Palindrome"<<endl;
    else cout<<"Not pallindrome"<<endl;
    return 0;
}