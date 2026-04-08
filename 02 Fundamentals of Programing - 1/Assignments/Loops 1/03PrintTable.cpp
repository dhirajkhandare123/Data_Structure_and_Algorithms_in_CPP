// Table of n where n is input numbers.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Table of "<<n<<endl;

    for(int i=1;i<=10;i++){
        cout<<n;
        cout<<" X ";
        cout<<i;
        cout<<" = ";
        cout<<i*n;
        cout<<endl;
    }
    return 0;
}