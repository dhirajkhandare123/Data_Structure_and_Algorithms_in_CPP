// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
// Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
// Output 1: All 3 points lie on the same line.

#include <iostream>
using namespace std;

int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;

    cout<<"Enter x1 and y1:  ";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2:  ";
    cin>>x1>>y1;
    cout<<"Enter x3 and y3:  ";
    cin>>x1>>y1;

    if(abs((y2-y1)/(x2-x1))==abs((y3-y1)/(x3-x1))||abs((y3-y2)/(x3-x2))==abs((y3-y1)/(x3-x1))){
        cout<<"The points are collinear."<<endl;
    }
    else{
        cout<<"The points are not collinear."<<endl;
    }
    return 0;
}