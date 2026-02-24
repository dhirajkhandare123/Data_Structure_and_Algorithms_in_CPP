// Write a program to add two matrices and save the result in one
//  of the given matrices.
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

    int matrix1[m][n];

    cout<<"\nEnter matrix one :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }

    int matrix2[m][n];

    cout<<"\nEnter matrix Two :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix2[i][j];
        }
    }

    cout<<"\n\nNow Addition matrix is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix1[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}