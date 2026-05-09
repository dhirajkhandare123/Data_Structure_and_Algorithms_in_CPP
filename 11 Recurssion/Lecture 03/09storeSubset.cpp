// Store subsets of a string with unique characters.

#include<bits/stdc++.h>
using namespace std;

void storeSubset(string ans,string original,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    storeSubset(ans+ch,original.substr(1),v);
    storeSubset(ans,original.substr(1),v);
}

int main()
{
    string original="abc",ans="";
    vector<string>v;
    storeSubset(ans,original,v);

    for(string ele:v){
        cout<<ele<<endl;
    }
    return 0;
}