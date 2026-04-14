#include<iostream>
using namespace std;

int main()
{
    // int arr[]={4,2,9,7,8}; // not almost sorted
    int arr[]={4,2,7,9,8}; // almost sorted
    int n = 5;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // almost sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        } 
    } // 2 4 7 8 9 - modified array
    // check if modified array is sorted.
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }

    if(flag==true) cout<<"almost sorted"<<endl;
    else cout<<"not almost sorted"<<endl;
    return 0;
}