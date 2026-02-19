// Write a program to store roll number and marks obtained
// by 4 students side by side in a matrix.

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter no. of students : ";
    cin>>m;

    int arr[m][2];

    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            if(j==0) arr[i][j]=i+1;
            else cin>>arr[i][j];
        }
    }

    // Printing
    cout<<"Roll"<<"||"<<" Marks"<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}