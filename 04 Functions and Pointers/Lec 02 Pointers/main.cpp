#include<iostream>
using namespace std;

void swapp1(int *a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int *a,int *b){
    cout<<"a: "<<*a<<" "<<"b: "<<*b<<endl;
}

int main()
{
    int a=8;
    int b=10;

    display(&a,&b);
    swapp1(&a,&b);
    display(&a,&b);

    return 0;
}