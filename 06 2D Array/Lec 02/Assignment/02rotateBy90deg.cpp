// Write a program to rotate the matrix by 90 degrees 
// anti-clockwise.

#include<iostream>
#include<vector>
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

    // Transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // Print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Rotate by 90
    // outer loop column
    for(int c=0;c<n;c++){
        int i=0;
        int j=m-1;
        while(i<j){
            swap(arr[i][c],arr[j][c]);
            i++;
            j--;
        }
    }

    // Print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}