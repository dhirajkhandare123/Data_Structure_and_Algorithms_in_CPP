#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter marks of A: ";
    cin>>a;
    cout<<"Enter marks of B: ";
    cin>>b;
    cout<<"Enter marks of C: ";
    cin>>c;

    if(a<b && a<c){
        cout<<"A is least.";
    }
    else if(b<c && b<a){
        cout<<"B is leats.";
    }
    else{
        cout<<"C is least.";
    }
    return 0;
}