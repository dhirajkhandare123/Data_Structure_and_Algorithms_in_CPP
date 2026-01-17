// Print reverse digit.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int lastdigit = 0;
    int r = 0;

    while(n>0){
        lastdigit = n % 10;
        r = r*10;
        r = r+lastdigit;
        n = n / 10;
    }

    cout<<r;
    return 0;
}