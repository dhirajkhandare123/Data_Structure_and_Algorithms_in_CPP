// Take inpput of side of triangle state wheather the triangle is equilateral, 
// scelene or isosceles

#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3;
    cout<<"Enter sides of triangle: ";
    cin>>s1>>s2>>s3;

    if(s1==s2 && s1==s3 && s2==s3){
        cout<<"Equilateral triangle."<<endl;
    }
    else if(s1==s2 || s1==s3 || s2==s2){
        cout<<"Isosceles triangle."<<endl;
    }
    else{
        cout<<"Scelene triangle."<<endl;
    }
    return 0;
}