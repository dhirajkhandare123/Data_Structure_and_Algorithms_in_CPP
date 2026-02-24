// Write a program to store 10 at every index of a 2D matrix 
// with 5 rows and 5 columns.
#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter rows : ";
    cin>>m;
    int n;
    cout<<"Enter columns : ";
    cin>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=10;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}