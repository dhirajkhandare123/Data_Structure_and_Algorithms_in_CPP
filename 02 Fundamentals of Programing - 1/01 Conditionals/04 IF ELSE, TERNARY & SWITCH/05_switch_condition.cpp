#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter month number: ";
    cin>>x;

    // 1 3 5 7 8 10 12 --> 31
    // 4 6 9 11 --> 30
    // 2 --> 28


    switch(x){
        case 2:
            cout<<"28";
            break;
    }


    switch(x<=7 && x%2==1){
        case 1:
            cout<<"31";
            break;
    }

    switch(x<=7 && x%2==0){
        case 1:
            cout<<"30";
            break;
    }

    switch(x>=7 && x%2==0){
        case 1:
            cout<<"31";
            break;
    }

    switch(x>=7 && x%2==1){
        case 1:
            cout<<"30";
            break;
    }

    return 0;
}