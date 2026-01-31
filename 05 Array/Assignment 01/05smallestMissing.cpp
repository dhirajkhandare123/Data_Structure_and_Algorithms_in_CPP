// WAP to find the smallest missing positive element in the
// sorted Array that contains only positive elements.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false; // false -> no missing
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            flag=true;
            cout<<i+1<<endl;
            break;
        }
    }

    if(flag==false){
        cout<<"There is no missing element"<<endl;
    }
    return 0;
}