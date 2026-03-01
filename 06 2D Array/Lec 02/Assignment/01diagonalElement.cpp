// Write a program to print the elements of both the diagonals in 
// a square matrix.

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter rows and columns for square matrix : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i+j==m-1) || (i==j)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}