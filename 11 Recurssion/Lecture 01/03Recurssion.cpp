// Print numbers using recursion from n to 1.

#include<iostream>
using namespace std;

void print(int n){
    // base condition
    if(n==0) return;
    cout<<n<<endl;
    print(n-1); // recursion
}

int main()
{
    print(5);
    return 0;
}