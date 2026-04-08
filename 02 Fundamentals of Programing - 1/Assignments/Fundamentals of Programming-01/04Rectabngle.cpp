// Take the input of length and breadth of rectangle, state wheather perimeter is
// greater or Area.

#include<iostream>
using namespace std;

int main()
{
    cout<<"Rectangle"<<endl;
    int length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;

    int area = length*breadth;
    int perimeter = 2*length + 2*breadth;

    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter<<endl;

    if(area>perimeter){
        cout<<"Area > Perimeter"<<endl;
    }
    else{
        cout<<"Perimeter > Area"<<endl;

    }
    return 0;
}