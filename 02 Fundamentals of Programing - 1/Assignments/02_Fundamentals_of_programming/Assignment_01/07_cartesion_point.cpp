// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    if(x!=0 && y==0){
        cout<<"Lies on x axis."<<endl;
    }
    else if(x==0 && y!=0){
        cout<<"Lies on y axis."<<endl;
    }
    else{
        cout<<"Lies in cartesian plane."<<endl;
    }
    return 0;
}