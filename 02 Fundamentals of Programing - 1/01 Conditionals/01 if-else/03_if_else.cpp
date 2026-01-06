// Take positive integer input and tell if it is divisible by 5 or not.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter num: ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"divisible by 5."<<endl;
    }
    else{
        cout<<"not divisible by 5."<<endl;
    }
    return 0;
}