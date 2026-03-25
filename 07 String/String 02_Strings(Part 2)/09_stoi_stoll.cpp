#include<iostream>
using namespace std;

int main()
{
    // stoi => string to integer
    string str = "1234567";
    int x = stoi(str);
    cout<<(x+1)<<endl;

    // stoll => string to long long
    string str1 = "12345678901234567";
    long long y = stoll(str1);
    cout<<(y+1)<<endl;
    
    return 0;
}