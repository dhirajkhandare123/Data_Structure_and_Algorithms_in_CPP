#include<iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

int main()
{
    int x = 2;
    int y = 9;
    cout<<sum(x,y)<<endl;

    cout<<sum(2,5)<<endl;
    return 0;
}