// Skip a character
// Remove all occurrences of ‘a’ from a string.
// Here recursion is use

#include<iostream>
using namespace std;

void removeChar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    if(original[idx] == 'a'){
        removeChar(ans,original,idx+1);
    }
    else{
        removeChar(ans+=original[idx],original,idx+1);
    }

}

int main()
{
    string str = "raghav garg";
    removeChar("",str,0);
    return 0;
}