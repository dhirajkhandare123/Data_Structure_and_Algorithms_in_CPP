// Print fibonicci series for nth number
// The Fibonacci sequence is the series 
// of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34... 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int a=1;
    int b=1;
    int sum=0;

    for(int i=1;i<=n-2;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<b;
    // if(n==0|n==1|n==2) cout<<1;
    // else <<sum;
    return 0;
}