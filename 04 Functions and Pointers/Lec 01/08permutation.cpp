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
    // int rfact=1;
    // for(int i=2;i<=r;i++){
    //     rfact *= i; 
    // }

    // for (n-r)!
    int nrfact = 1;
    for(int i=2;i<=n-r;i++){
        nrfact *= i;
    }

    int ncr = nfact/(nrfact);

    cout<<"Permutation = "<<ncr<<endl;
    
    return 0;
}
/*
    Combination:
    n            n!
     C   =  --------------
      r      r! X (n-r)!

    Permutation:
    n            n!
     P   =  --------------
      r        (n-r)!
*/