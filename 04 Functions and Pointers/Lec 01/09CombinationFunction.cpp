#include<iostream>
using namespace std;

int fact(int x){

    int f = 1;

    for(int i=2;i<=x;i++){
        f *= i; 
    }

    return f;
}

// for combination
int combination(int n, int r){

    int ncr = fact(n)/(fact(r)*fact(n-r));

    return ncr;
}

// for permutation
int permutation(int n, int r){

    int npr = fact(n)/(fact(n-r));

    return npr;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;

    cout<<"Combination = "<<combination(n,r)<<endl;
    cout<<"Permutation = "<<permutation(n,r)<<endl;
    
    return 0;
}



// #include<iostream>
// using namespace std;

// int fact(int x){
//     int f = 1;
//     for(int i=2;i<=x;i++){
//         f *= i; 
//     }
//     return f;
// }

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;

//     // for n!
//     int nfact=fact(n);
    

//     // for r!
//     int rfact=fact(r);

//     // for (n-r)!
//     int nrfact = fact(n-r);

//     int ncr = nfact/(rfact*nrfact);

//     cout<<"Combination = "<<ncr<<endl;
    
//     return 0;
// }