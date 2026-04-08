#include<iostream>
using namespace std;

int main()
{
    int radius,area,circumference;
    cout<<"Enter radius: ";
    cin>>radius;

    int pi=3.14;

    area = pi*radius*radius;

    circumference = 2*pi*radius;

    if(area>circumference){
        cout<<"area > circumference"<<endl;
    }
    else{
        cout<<"circumference > area"<<endl;
    }

    return 0;
}