// A matrix or 2D Array of size (n x n) is given
// change this matrix into transpose in same array.

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter no. of rows/columns : ";
    cin>>m;
    int arr[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    

    // transpose in the same matrix.
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            // swapping of i,j and j,i.
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // print the transpose.
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}