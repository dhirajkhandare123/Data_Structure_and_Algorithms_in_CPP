// Given two strings s and t return true if t is an anagram of s,
// and false otherwise.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Enter s: ";
    getline(cin,s);

    string t;
    cout<<"Enter t: ";
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    int m = s.length();
    int n = t.length();

    if(m!=n){
        cout<<"No"<<endl;
        return 0;
    } 
    bool flag = true;


    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            flag=false;
            
        }
    }

    if(flag==true) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}