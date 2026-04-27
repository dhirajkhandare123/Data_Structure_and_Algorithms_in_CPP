// Make a function which alculates 'a' raised to the power
// 'b' using recursion.

#include<iostream>
using namespace std;

int powerRec(int a, int b){
    if(a==0) return 0;
    if(b==0) return 1;
    
    return a * powerRec(a,b-1);
}

int main()
{
    cout<<powerRec(5,3);
    return 0;
}