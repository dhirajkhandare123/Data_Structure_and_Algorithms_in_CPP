// Write a program to print the matrix in wave form.

/*
Enter no. of rows: 3
Enter no. of columns: 3
1 2 3
4 5 6
7 8 9

7 4 1 2 5 8 9 6 3 
*/

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
    // waveform
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    // print wave form


    return 0;
}