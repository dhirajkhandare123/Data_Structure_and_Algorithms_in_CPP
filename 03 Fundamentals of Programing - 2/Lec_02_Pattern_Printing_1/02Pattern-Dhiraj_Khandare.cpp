#include <iostream>
using namespace std;

int main(){
    // Take input from user for rows and coloumns.
    int n;  // number of rows
    cout<<"Enter number of rows: ";
    cin>>n;
    int m;   // number of stars in each row.
    cout<<"Enter number of stars: ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}