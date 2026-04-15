#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
            }
        }
    }
    if(flag==false){
        cout<<"Not sorted";
    }
    else cout<<"sorted";
    cout<<endl;
    return 0;
}