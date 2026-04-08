// Q 4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int start=4;
    int d=3;

    while(n--){
        cout<<start<<" ";
        start+=3;
    }
    return 0;
}