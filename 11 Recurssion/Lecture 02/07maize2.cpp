// Using two parametrows

#include<iostream>
using namespace std;

int maize2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maize2(row,col-1);
    int downWays = maize2(row-1,col);
    return rightWays + downWays;
}

int main()
{
    cout<<maize2(3,3);
    return 0;
}