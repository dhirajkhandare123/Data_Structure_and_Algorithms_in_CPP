#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f *=i;
    }
    return f;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int r;
    cout<<"Enter r: ";
    cin>>r;

    // for n!
    int nfact = fact(n);

    // for (n-r)!
    int nrfact = fact(n-r);

    // Formula
    int Permutation = nfact/(nrfact);

    cout<<"Permutation = "<<Permutation;
    return 0;
}