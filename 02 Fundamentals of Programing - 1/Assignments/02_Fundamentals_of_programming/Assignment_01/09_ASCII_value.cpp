// Q 9. Write a C++ program to input any character and check whether it is the alphabet, digit or special 
// character.
// Input 1: ch = ‘9’
// Output 1: digit

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter: ";
    char ch;
    cin>>ch;

    if((char)ch>=48 && (char)ch<=57){
        cout<<"Its a digit"<<endl;
    }
    else if((char)ch>=65 && (char)ch<=90){
        cout<<"Its a capital alphabates"<<endl;
    }
    else if((char)ch>=97 && (char)ch<=122){
        cout<<"Its a small alphabates"<<endl;
    }
    else{
        cout<<"Not predict."<<endl;
    }

    return 0;
}