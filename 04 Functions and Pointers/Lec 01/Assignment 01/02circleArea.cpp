// Q2 : Write a function that takes the radius of a circle as an argument and returns 
// its area.

#include<iostream>
using namespace std;

float circle_area(float r){
    
    return 3.14*r*r;
}

int main()
{
    float r;
    cout<<"Enter radius: ";
    cin>>r;

    cout<<"Area of circle is "<<circle_area(r)<<endl;
    return 0;
}

