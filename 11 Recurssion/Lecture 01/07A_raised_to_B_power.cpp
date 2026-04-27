// Make a function which alculates 'a' raised to the power
// 'b' using loops.

#include<iostream>
using namespace std;

int power(int a,int b){
    if(a==0 && b==0){
        cout<<"Invalid";
        return -100;
    }
    if(a==0) return 0;
    if(b==0) return 1;
    int p=1;
    for(int i=0;i<b;i++){
        p = p * a; 
    }
    return p;
}

int main()
{
    cout<<power(3,2);
    return 0;
}