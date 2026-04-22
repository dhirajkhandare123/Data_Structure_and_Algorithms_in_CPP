#include<iostream>
using namespace std;

int main()
{
    int arr[] = {22,12,43,65,78,56,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=65;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) {
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"found";
    else cout<<"No";
    return 0;
}