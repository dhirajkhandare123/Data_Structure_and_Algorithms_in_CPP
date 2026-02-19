// Write a program to print the transpose of the matrix entered
// by the user and store it in a new matrix.

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int t[n][m];

    // store the transpose.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    // print the transpose.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}