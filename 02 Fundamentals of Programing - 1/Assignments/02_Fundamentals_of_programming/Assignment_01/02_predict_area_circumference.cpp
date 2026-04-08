// Q 2. Given the radius of the circle predict wheather the area of circle is greater than circumference or not.

#include <iostream>
using namespace std;

int main(){
    float r=4;
    float pi=3.14;
    float circumference=2*pi*r;
    float area=pi*r*r;

    cout<<circumference<<endl;
    cout<<area<<endl;

    if(area>circumference){
        cout<<"Area is greater than the circumference."<<endl;
    }
    else{
        cout<<"Area is not greater than the circumference."<<endl;
    }
    return 0;
}