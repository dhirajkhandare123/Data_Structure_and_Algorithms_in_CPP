// Input a string of even length and reverse the first half of the 
// string.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s<<endl;

    return 0;
}