#include<iostream>
using namespace std;

int maize(int sr, int sc, int er, int ec){
    if(sr>er || sc>er) return 0;
    if(sr==er &&sc==ec) return 1;
    int rightWays = maize(sr,sc+1,er,ec);
    int downWays = maize(sr+1,sc,er,ec);
    int ans = rightWays + downWays;
    return ans;
}

int main()
{
    cout<<maize(0,0,2,2);
    return 0;
}