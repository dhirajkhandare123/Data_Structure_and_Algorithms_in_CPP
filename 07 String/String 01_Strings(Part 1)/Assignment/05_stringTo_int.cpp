/*
Input a string of length less than 10 and convert it into integer
without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter: ";
    cin>>str;

    int n = str.length();
    int x=0;

    for(int i=0;i<n;i++){
        x*=10;
        x+=str[i]-48;
        // str[i] is string so it consider value of 1 as 49
        // hence we minus 48 from it.
    }
    cout<<x<<endl;
    cout<<"Proof: "<<x+1<<endl;
    return 0;
}