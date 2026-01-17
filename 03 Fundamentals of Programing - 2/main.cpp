#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    int nsp=n-1,str=1;
    for(int i=0;i<n;i++){
        for(int j=nsp;j>0;j--){
            cout<<" ";
        }
        nsp--;
        for(int k=0;k<str;k++){
            cout<<"* ";
        }
        str++;
        cout<<endl;
    }
}