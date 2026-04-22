// Given a matrix having 0-1 only where each row is sorted in 
// increasing order, find the row with the 
// maximum number of 1’s.
//  Input matrix : 0 1 1 1
//  0 0 1 1
//  1 1 1 1  // this row has maximum 1s
//  0 0 0 0
//  Output: 2

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int arr[5][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1}};
    int m=5; // rows
    int n=6; // columns
    int row=0;

    for(int i=0;i<m;i++){
        int lo=0;
        int hi=n-1;
        int first=-1;
        int count=0;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[i][mid]==1){
                if(arr[i][mid-1]!=1){
                    first=mid;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid] > 1){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        
    }
    return 0;
}