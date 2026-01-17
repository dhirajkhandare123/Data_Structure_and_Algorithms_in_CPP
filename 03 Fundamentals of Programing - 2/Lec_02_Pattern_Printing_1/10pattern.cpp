/*
Que.    Print the given pattern (Number triangle reverse).

        Enter rows: 4
        1 2 3 4 
        1 2 3 
        1 2 
        1 

*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }