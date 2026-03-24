#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // dhiraj
    // adhijr
    string s;
    cout<<"Enter: ";
    getline(cin,s);
    cout<<"Before sort: "<<s<<endl;
    sort(s.begin(),s.end());
    cout<<"After sort: "<<s<<endl;
    return 0;
}