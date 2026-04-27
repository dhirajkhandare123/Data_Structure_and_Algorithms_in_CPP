// Print numbers using recursion from 1 to n.

#include<iostream>
using namespace std;

void print(int n){
    // base condition
    if(n==0) return;
    print(n-1); // recursion
    cout<<n<<endl;
}

// Thus in recursion is depend upon where is recurssive 
// function is call.

int main()
{
    print(5);
    return 0;
}