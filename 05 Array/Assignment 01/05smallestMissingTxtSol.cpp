// WAP to find the smallest missing positive element in the
// sorted Array that contains only positive elements.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {-8,-2,0,1,2,3,4,5};
    int n = sizeof(arr)/4;
    bool flag = false;

    int x=1;

    for(int i=0;i<n;i++){
        if(arr[i]<=0) continue;

        if(arr[i]!=x){
            cout<<x<<endl;
            flag = true;
            break;
        }
        else{
            x++;
        }
    }

    if(flag==false){
        cout<<"There is no missing element"<<endl;
    }

    return 0;
}