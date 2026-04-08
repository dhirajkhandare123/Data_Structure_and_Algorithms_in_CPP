// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter student1 marks: ";
    cin>>a;
    cout<<"Enter student2 marks: ";
    cin>>b;
    cout<<"Enter student3 marks: ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    else if(b>a){
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    else{
        cout<<c;
    }
    return 0;
}