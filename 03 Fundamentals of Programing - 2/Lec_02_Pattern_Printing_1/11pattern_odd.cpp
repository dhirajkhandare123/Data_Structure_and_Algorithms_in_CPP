/*
Que. Print the given pattern (triangle with odd numbers.)

1 
1 3 
1 3 5 
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;


//     for(int i=1;i<=n;i++){
//     int a=1;
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a=a+2;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;


    for(int i=1;i<=n;i++){
        // first i odd numbers.
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}