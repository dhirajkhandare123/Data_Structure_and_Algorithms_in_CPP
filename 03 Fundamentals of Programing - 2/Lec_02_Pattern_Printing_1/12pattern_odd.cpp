/*
Que. Print the given pattern (triangle with odd numbers.)

1 
3 5 
7 9 11 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    int a=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+2;
        }
        cout<<endl;
    }
    return 0;
}