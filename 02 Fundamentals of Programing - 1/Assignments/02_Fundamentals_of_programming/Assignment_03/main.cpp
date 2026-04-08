#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // here condition is number of terms which is calculate as follow.
    // start = 1  diff = 2   
    // formula: 
    //     terms = start + (n - 1)diff
     
    for(int i=1;i<=(2*n+1);i=i+2){
        cout<<i<<endl;
    }
    return 0;
}