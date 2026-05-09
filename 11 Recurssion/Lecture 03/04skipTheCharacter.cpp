// Skip a character
// Remove all occurrences of ‘a’ from a string.
// Here recursion is not use
#include<iostream>
using namespace std;


int main()
{
    string str = "raghav garg";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s+=str[i]; 
    } 
    cout<<s<<endl;
    
    return 0;
}