/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"No of lines: ";
    cin>>n;

    int nsp=n-1;
    int nst=1;

    for(int i=1;i<=2*n-1;i++){
        // SPACES
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;
        else nsp++;
        // STARS
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=n-1) nst+=2;
        else nst-=2;

        cout<<endl;
    }
    return 0;
}

// (1) Here 2n-1 lines are printed.
// (2) Let nsp = n-1 and nst = 1. [where nsp = no. of spaces and nst = no. of stars]
// (3) Use conditional statements.
// (4) if i is less or equal than n-1 then nsp-- if greater then nsp++.
// (5) if i is less than or equal n-1 then nst+=2 if greater then nst-=2.
