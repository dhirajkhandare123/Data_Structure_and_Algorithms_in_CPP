// Q4: Write a C++ program to find the largest element of a given 
// 2D array of integers.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int m;
    cout<<"Enter rows : ";
    cin>>m;
    int n;
    cout<<"Enter columns : ";
    cin>>n;

    int a[m][n];

    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int largest = INT_MIN;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(largest<a[i][j]){
                largest=a[i][j];
            }
        }
    }

    cout<<"Largest element in array is "<<largest<<endl;

    return 0;
}