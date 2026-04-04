// display this AP - 1,3,5,7,9,........ upto n terms
/*
    a=1,    d=2
    an = a+(n-1)*d
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number of terms: ";
    int n;
    cin>>n;
    for(int i=1;i<=(2*n-1);i=i+2){
        cout<<i<<endl;
    }
    return 0;
}

// here condition is number of terms which is calculate as follow.
    // start = 1  diff = 2   
    // formula: 
    //     terms = start + (n - 1)diff
