// Leap year

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
    cout<<"You enter "<<year<<endl;

    if(year%400==0){
        // If divisible by 400 then leap year.
        cout<<"Leap year"<<endl;
    }
    else if(year%100==0){
        // If divisible by 100 then not leap year.
        cout<<"Not a Leap year"<<endl;
    }
    else if(year%4==0){
        // If divisible by 4 then leap year.
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"Not a Leap year"<<endl;
    }
    return 0;
}