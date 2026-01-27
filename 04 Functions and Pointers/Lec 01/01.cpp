// #include <iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"Enter c: ";
//     cin>>c;

//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=1;i<=b;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=1;i<=c;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int a;

    for(int k=1;k<=3;k++){
        cin>>a;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    
    return 0;
}