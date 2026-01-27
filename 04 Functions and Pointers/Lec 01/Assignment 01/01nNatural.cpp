// Q1 : Write a function to print squares of first n natural numbers, taking n as 
// argument to the function.

#include<iostream>
using namespace std;

int fun(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<"^2 = "<<i*i<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    fun(n);
    return 0;
}

