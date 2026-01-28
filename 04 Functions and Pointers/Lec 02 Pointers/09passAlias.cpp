#include<iostream>
using namespace std;

void Swap(int &a, int &b)  // pass by reference.
{   
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 8,b = 2;

    Swap(a,b);

    cout<<a<<" "<<b<<endl;
    return 0;
}