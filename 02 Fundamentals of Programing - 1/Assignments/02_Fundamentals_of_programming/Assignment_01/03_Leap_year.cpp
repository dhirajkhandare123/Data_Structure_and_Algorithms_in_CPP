// Q 3. Any year is input from the keyboard state wheather the year is leap year or not.

#include <iostream>
using namespace std;

int main(){

    cout<<"Enter yera: ";
    int year;
    cin>>year;

    // 1700 and 1900 are divisible by 4 but not a leap year.
    if(year%4==0 and year%100!=0){
        cout<<year<<" is leap year"<<endl;
    }
    else{
        cout<<year<<" is not leap year"<<endl;
    }
    return 0;
}