/*

Enter: 4
1111111
1222222
1233333
1234444
1234555
1234566
1234567

*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            cout<<min(i,j);
        }
        cout<<endl;
    }
    return 0;
}