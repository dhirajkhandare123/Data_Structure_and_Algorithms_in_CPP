// Given the marks of the student. If the marks are greater than 33 print pass else 
// print Fail without using if-else.
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter marks: ";
    int m;
    cin>>m;

    // ( Conditon ) ? true : false;

    (m>=33)?cout<<"Pass."<<endl:cout<<"Fail";
    
    return 0;
}