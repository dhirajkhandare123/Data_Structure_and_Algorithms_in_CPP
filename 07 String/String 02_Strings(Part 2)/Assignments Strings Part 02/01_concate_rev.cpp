/*
Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    cin>>str; // input

    string rev=str;  // declare
    reverse(rev.begin(),rev.end()); // make it reverse

    string s = str+rev; // concatation
    cout<<s;  // print
    return 0;
}