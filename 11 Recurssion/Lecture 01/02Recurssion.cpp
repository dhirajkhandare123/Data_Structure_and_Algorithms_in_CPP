// Make a function which calculate factorial of n
// using  recursion.

#include<iostream>
using namespace std;

int fact(int n){
    // base condition
    if (n==1 || n==0) return 1;
    // recursion function call
    int ans = n * fact(n-1);
    return ans; // return
}

int main()
{
    cout<<fact(5);
    return 0;
}