// Q 1 . Take input two numbers and print greatest one

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter num1: ";
    cin>>n1;
    cout<<"Enter num2: ";
    cin>>n2;

    if(n1>n2){
        cout<<"The greatest number is "<<n1;
    }
    else{
        cout<<"The greatest number is "<<n2;
    }
    return 0;
}