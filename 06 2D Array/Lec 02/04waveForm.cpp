//  CLASSWORK
// input: 1 2 3 
//        4 5 6 
//        7 8 9
// output: 1 4 7 8 5 2 3 6 9

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
        for(int j=0;j<n;j++){
            if(j%2==0){
                for(int i=0;i<m;i++){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int i=m-1;i>=0;i--){
                    cout<<a[i][j]<<" ";
                }
            }
        }
    return 0;
}