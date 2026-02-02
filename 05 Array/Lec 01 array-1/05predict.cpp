// Predict output.

#include<iostream>
using namespace std;

int main()
{
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp=num[25];           // swaping
    num[25]=num[0];
    num[0]=temp;
    cout<<endl<<num[0]<<" "<<num[25]<<endl;

    return 0;
}