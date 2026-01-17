// Write count of dogit.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int count=0;
    int a = n;
    while(n>0){
        n = n / 10;
        count=count+1;
    }
    if(a==0) cout<<1;
    else cout<<count;
    return 0;
}