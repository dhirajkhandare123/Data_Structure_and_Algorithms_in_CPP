// Input a string of length greater than 5 and reverse the 
// substring from position 2 to 5 using inbuillt functions.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin()+1,s.begin()+5);
    cout<<s<<endl;
    return 0;
}