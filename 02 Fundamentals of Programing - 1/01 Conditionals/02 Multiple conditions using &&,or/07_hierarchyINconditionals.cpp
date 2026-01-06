#include <iostream>
using namespace std;

int main(){
    cout<<"Num: ";
    int n;
    cin>>n;
    if((n>=1||n<=9)&&(n!=0 && n!=(-n))){
        cout<<"number is positive single digit.";
    }
    else{
        cout<<"ERROR";
    }
    return 0;
}