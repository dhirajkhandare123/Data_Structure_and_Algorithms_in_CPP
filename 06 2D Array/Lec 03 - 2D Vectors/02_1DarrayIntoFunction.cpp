// One Dimensional Array

#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0]=10;
}

int main()
{
    int arr[3] = {1,2,3};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;
    return 0;
}