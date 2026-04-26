// Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n==1) return true;
    if(n%2==0){
        return isPowerOfTwo(n/2);
    }
    return false;
}

int main()
{
    cout<<"Enter number: ";
    int n;
    cin>>n;
    
    if(isPowerOfTwo){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}