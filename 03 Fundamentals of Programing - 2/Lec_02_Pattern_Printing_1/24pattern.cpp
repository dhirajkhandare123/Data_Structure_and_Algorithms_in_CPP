/*
Print :
1
01
010
1010
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int a=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
            a++;
        }
        cout<<endl;
    }
    return 0;
}