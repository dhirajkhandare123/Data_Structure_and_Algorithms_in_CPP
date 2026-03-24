// Given a string consisting of lowercase English alphabates.
// Print the character that is occuring most number of times.

#include<iostream>
using namespace std;

int main()
{
    string s = "dhirajkhandare";
    int max = 0;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max=count;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max==count){
            cout<<ch<<" : "<<count<<endl;
        }
    }

    return 0;
}