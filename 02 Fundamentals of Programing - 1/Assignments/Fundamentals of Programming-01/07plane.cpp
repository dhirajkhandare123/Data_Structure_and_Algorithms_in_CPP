#include<iostream>
using namespace std;

int main()
{
    float x,y;
    cout<<"Enter x co-ordinate: ";
    cin>>x;
    cout<<"Enter y co-ordinate: ";
    cin>>y;

    if(x==0 && y==0){
        cout<<"Point lies on origin.";
    }

    if(x==0 && y!=0){
        cout<<"Point lies on x-axis.";
    }

    if(x!=0 && y==0){
        cout<<"Point lies on y-axis.";
    }
    
    if(x!=0 && y!=0){
        cout<<"Point lies on plane.";
    }
    return 0;
}