// Skip a character
// Remove all occurrences of ‘a’ from a string.
// Here recursion is use
#include<iostream>
using namespace std;

void removeChar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    if(original[0] == 'a'){
        removeChar(ans,original.substr(1));
    }
    else{
        removeChar(ans+=original[0],original.substr(1));
    }

}

int main()
{
    string str = "raghav garg";
    removeChar("",str);
    return 0;
}