//  CLASSWORK
// input: 1 2 3 
//        4 5 6 
//        7 8 9
// output: 7 8 9 6 5 4 1 2 3

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter rows : ";
    cin>>m;
    int n;
    cout<<"Enter columns : ";
    cin>>n;

    int a[m][n];
        cout<<"Enter elements of matrix: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Wave form : "<<endl;
        for(int i=m-1;i>=0;i--){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j]<<" ";
                }
            }
        }
    return 0;
}