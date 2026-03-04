#include<iostream>
using namespace std;

int factorial(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f = f * i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));

    return ncr;
}

int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}