#include <iostream>
using namespace std;

int main(){
    int x,y;
    char op;
    cout<<"Enter problem: ";
    cin>>x>>op>>y;

    switch(op){
        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<x/y;
            break;
        default:
            cout<<"Enter valid operator.";
            break;
    }
    return 0;
}







// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Enter x: ";
//     int x;
//     cin>>x;
//     cout<<"Enter y: ";
//     int y;
//     cin>>y;
//     cout<<"******************"<<endl;
//     cout<<endl;

//     cout<<"Operation on x and y \nAddition --> +\nSubtraction--> -\nMultiplication --> *\nDivision --> /"<<endl;

//     cout<<endl;
//     cout<<"******************"<<endl;

//     char ch;
//     cout<<"Enter operation: ";
//     cin>>ch;

//     switch(ch){
//         case '+':
//             cout<<x+y;
//             break;
//         case '-':
//             cout<<x-y;
//             break;
//         case '*':
//             cout<<x*y;
//             break;
//         case '/':
//             cout<<x/y;
//             break;
//         default:
//             cout<<"Enter valid operator.";
//             break;
//     }
//     return 0;
// }