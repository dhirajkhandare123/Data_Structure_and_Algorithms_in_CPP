#include <iostream>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"Enter side1 of triangle: ";
    cin>>s1;
    cout<<"Enter side2 of triangle: ";
    cin>>s2;
    cout<<"Enter side3 of triangle: ";
    cin>>s3;
    if((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s1)){
        cout<<"can be side of triangle";
    }
    else{
        cout<<"Invalid triangle.";
    }
    return 0;
}