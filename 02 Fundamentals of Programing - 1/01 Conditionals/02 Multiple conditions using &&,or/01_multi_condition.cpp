// Que: Take positive integer input and tell if it is a three digit number or not.

#include <iostream>
using namespace std;

int main(){
    cout<<"enter number: ";
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Three digit."<<endl;
    }
    else{
        cout<<"Not three digit."<<endl;
    }
    return 0;
}