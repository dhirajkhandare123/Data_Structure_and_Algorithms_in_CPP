/*
Que. Print the given pattern (Alphabate square.)

A    B    C    D    
A    B    C    D    
A    B    C    D    
A    B    C    D
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;

//     int a=1;

//     for(int i=1;i<=n;i++){
//         for(int j=65;j<=n+64;j++){
//             cout<<(char)j<<"    ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<"    ";
        }
        cout<<endl;
    }
    return 0;
}