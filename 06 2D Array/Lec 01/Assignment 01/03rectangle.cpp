// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates 
// (l1, r1) and (l2, r2). Return the sum of the rectangle 
// from (l1,r1) to (l2, r2).
// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: 5
// Input 2:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 1: 2

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

    int a[m][n];

    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int x1,x2,y1,y2;
    cout<<"Enter the 1st coordinate: ";
    cin>>x1>>y1;

    cout<<"Enter 2nd coordinate: ";
    cin>>x2>>y2;

    // sum
    int sum=0;
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum+=a[i][j];
        }
    }

    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<sum<<endl;
    return 0;
}