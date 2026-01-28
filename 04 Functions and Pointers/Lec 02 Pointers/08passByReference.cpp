#include<iostream>
using namespace std;

void Swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a = 8,b = 2;
    // cin>>a>>b;

    int* x = &a;
    int* y = &b;
    Swap(x,y);
    
    cout<<a<<" "<<b<<endl;
    return 0;
}