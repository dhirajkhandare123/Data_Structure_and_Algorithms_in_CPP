// Print solid rectangle
/*
        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 

*/

#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of coloumns: ";
    cin>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}