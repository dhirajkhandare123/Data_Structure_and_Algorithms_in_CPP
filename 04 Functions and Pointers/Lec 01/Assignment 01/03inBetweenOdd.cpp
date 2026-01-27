// Q3: Given two numbers a and b, write a function to print all odd numbers between
//  them.

#include<iostream>
using namespace std;

int inbetween_odd(int n1, int n2){
    for(int i=n1;i<=n2;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n1;
    cout<<"Enter num1: ";
    cin>>n1;
    int n2;
    cout<<"Enter num2: ";
    cin>>n2;

    inbetween_odd(n1,n2);
    return 0;
}
