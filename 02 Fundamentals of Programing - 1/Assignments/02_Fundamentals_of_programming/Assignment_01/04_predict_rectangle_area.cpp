// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;

int main(){
    float length=5;
    float breadth=7;

    float area=length*breadth;
    float perimeter=2*length+2*breadth;

    if(area>perimeter){
        cout<<"The area = "<<area<<" is greater than perimeter."<<endl;
    }
    else{
        cout<<"The perimeter = "<<perimeter<<" is greater"<<endl;
    }
    return 0;
}