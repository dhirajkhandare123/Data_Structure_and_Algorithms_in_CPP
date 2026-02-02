#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++){
        cout<<"Enter : ";
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
    return 0;
}