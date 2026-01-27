/*
combination = n!/r!*(n-r)!

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;

    // for n!
    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact *= i; 
    }

    // for r!
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact *= i; 
    }

    // for (n-r)!
    int nrfact = 1;
    for(int i=2;i<=n-r;i++){
        nrfact *= i;
    }

    int ncr = nfact/(rfact*nrfact);

    cout<<"Combination = "<<ncr<<endl;
    
    return 0;
}