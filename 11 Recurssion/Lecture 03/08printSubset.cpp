// Print subsets of a string with unique characters.

#include<iostream>
using namespace std;

void printSubset(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    printSubset(ans,original.substr(1));
    printSubset(ans+ch,original.substr(1));
}

int main()
{
    string original="abc",ans="";
    printSubset(ans,original);
    return 0;
}