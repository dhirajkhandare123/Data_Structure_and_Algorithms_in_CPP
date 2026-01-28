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

    Swap(&a,&b);
    
    cout<<a<<" "<<b<<endl;
    return 0;
}