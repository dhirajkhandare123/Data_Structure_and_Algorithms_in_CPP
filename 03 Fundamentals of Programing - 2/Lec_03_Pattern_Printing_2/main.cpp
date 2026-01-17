#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter: ";
    cin>>n;


    for(int i=1;i<=n;i++){
    int a=1;
        for(int j=1;j<=n;j++){
            cout<<a;
            if(j<i) a++; 
        }
        cout<<endl;
    }
    return 0;
}


// Last wala baghun ghene.