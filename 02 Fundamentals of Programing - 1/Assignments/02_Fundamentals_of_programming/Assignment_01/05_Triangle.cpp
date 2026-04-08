// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include <iostream>
using namespace std;

int main(){
    int s1=5,s2=4,s3=4;

    if(s1==s2==s3){
        cout<<"Given triangle is equilateral triangle.";
    }
    else if(s1==s2||s2==s3||s1==s3){
        cout<<"Given triangle is isosceles triangle.";
    }
    else{
        cout<<"Given triangle is scalene triangle.";
    }
    return 0;
}