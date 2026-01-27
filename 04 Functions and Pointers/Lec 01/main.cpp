#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact *= i; 
    }
    return fact;
}

int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation(int n, int r){
    int ncr = fact(n)/(fact(n-r));
    return ncr;
}

int main()
{
    int n,r;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;

    cout<<"Combination = "<<combination(n,r)<<endl;
    cout<<"Permutation = "<<permutation(n,r)<<endl;
    return 0;
}