#include<iostream>
using namespace std;
int fun(int a=1, int b=6){
    return a+b;
    cout<<"Hello world!";
}
int main()
{
    cout<<fun();
    return 0;
}