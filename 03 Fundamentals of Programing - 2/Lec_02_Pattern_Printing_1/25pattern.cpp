/*
1
00
111
0000
11111
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int a=1;

    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1; // row number odd.
        else a=0;   // row number even.
        for(int j=1;j<=i;j++){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}