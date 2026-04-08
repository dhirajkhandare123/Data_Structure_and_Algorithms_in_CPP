/*
Q1) Take two numbers input and print largest number.
*/
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    if(num1>num2){
        cout<<"First number "<<num1<<" is the largest."<<endl;
    }
    else{
        cout<<"Second number "<<num2<<" is the largest."<<endl;
    }
    return 0;
}