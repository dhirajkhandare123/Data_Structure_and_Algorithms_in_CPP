// Que: Given an integer. Print the absolute value of that integer.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number: ";
    int n;
    cin>>n;
    if(n>0){
        cout<<"number = "<<n;
    }
    else{
        cout<<"number = "<<(-n);
    }
    return 0;
}