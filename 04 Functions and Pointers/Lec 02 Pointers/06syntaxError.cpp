#include<iostream>
using namespace std;

int main()
{
    int x = 5, y = 20;
    // syntax error
    // int* p1=&x, p2=&y; // we can write like this.
    // correct syntax is, 
    int* p1=&x, * p2=&y;
    return 0;
}