// Input n strings and write a program to find the longest common
// prefix string of all the string.

// Leetcode-14 question:
// hint: sorting

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    if(v.size()==1) cout<<v[0]<<endl;

    int n = v.size();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    string first = v[0];
    string last = v[n-1];
    string s="";

    for(int i=0;i<(min(first.length(),last.length()));i++){
        if(first==last){
            s+=first[i];
        }
        else break;
    }
    cout<<s<<endl;
    return 0;
}