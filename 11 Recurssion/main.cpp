#include<iostream>
using namespace std;
int maizePath(int sr,int sc,int er,int ec){
    if(sr==er && sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    int rightWays=maizePath(sr,sc+1,er,ec);
    int downWays=maizePath(sr+1,sc,er,ec);
    int totalWays=rightWays + downWays;
    return totalWays;
}
int main()
{
    cout<<maizePath(0,0,2,2);
    return 0;
}