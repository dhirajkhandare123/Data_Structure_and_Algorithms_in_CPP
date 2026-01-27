#include<iostream>
using namespace std;

void func(int x, int y){
    cout<<"Address of func x "<<&x<<endl;
    cout<<"Address of finc y "<<&y<<endl;
}
int main()
{
    int x = 3;
    int y = 7;

    cout<<"Address of main x "<<&x<<endl;
    cout<<"Address of main y "<<&y<<endl;
    cout<<"*****************"<<endl;
    func(x,y);

    return 0;
}