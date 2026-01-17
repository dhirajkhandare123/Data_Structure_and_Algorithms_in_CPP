#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r=0;
    int lastdigit;

    while(n>0){
        lastdigit=n%10;
        r+=lastdigit;
        n=n/10;
    }
    cout<<r;
    return 0;
}