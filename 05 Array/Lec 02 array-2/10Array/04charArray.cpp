#include<iostream>
using namespace std;

int main()
{
    char arr[] = {'d','h','i','r','a','j'};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}