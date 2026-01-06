// Take 3 positive integers input and print greatest from them.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter number : ";
    cin>>a;
    cout<<"Enter number : ";
    cin>>b;
    cout<<"Enter number : ";
    cin>>c;
    if(a>b){   // a>b
        if(a>c){  // a>c  ,   a>b
            cout<<a;
        }
        else{    // c>a
            cout<<c;
        }
    }

    else{    // b>a
        if(b>c){  // b>a  ,  b>c
            cout<<b;
        }
        else{    //  b>a  , c>b
            cout<<c;
        }
    }
    return 0;
}