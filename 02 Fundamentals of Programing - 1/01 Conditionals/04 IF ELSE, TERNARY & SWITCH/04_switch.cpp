// Write program for month number and print total number of days.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter month number: ";
    cin>>x;
        switch(x){
        case 1:
            cout<<"January ="<<31;
            break;
        case 2:
            cout<<"February = "<<28;
            break;
        case 3:
            cout<<"March = "<<31;
            break;
        case 4:
            cout<<"April = "<<30;
            break;
        case 5:
            cout<<"May = "<<31;
            break;
        case 6:
            cout<<"June = "<<30;
            break;
        case 7:
            cout<<"July = "<<31;
            break;
        case 8:
            cout<<"August = "<<31;
            break;
        case 9:
            cout<<"September = "<<30;
            break;
        case 10:
            cout<<"October = "<<31;
            break;
        case 11:
            cout<<"November = "<<30;
            break;
        case 12:
            cout<<"December = "<<31;
            break;
        default:
            cout<<"Invalid";
            break;
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int main(){
//     int x;
//     int day;
//     cout<<"Enter month number: ";
//     cin>>x;


//     if(x==1){
//         day=31;
//     }
//     else if(x==2){
//         day=28;
//     }
//     else if(x==3){
//         day=31;
//     }
//     else if(x==4){
//         day=30;
//     }
//     else if(x==5){
//         day=31;
//     }
//     else if(x==6){
//         day=30;
//     }
//     else if(x==7){
//         day=31;
//     }
//     else if(x==8){
//         day=31;
//     }
//     else if(x==9){
//         day=30;
//     }
//     else if(x==10){
//         day=31;
//     }
//     else if(x==11){
//         day=30;
//     }
//     else if(x==12){
//         day=31;
//     }
//     else{
//         day=00;
//     }

//     switch(x){
//         case 1:
//             cout<<"January = "<<day;
//             break;
//         case 2:
//             cout<<"February = "<<day;
//             break;
//         case 3:
//             cout<<"March = "<<day;
//             break;
//         case 4:
//             cout<<"April = "<<day;
//             break;
//         case 5:
//             cout<<"May = "<<day;
//             break;
//         case 6:
//             cout<<"June = "<<day;
//             break;
//         case 7:
//             cout<<"July = "<<day;
//             break;
//         case 8:
//             cout<<"August = "<<day;
//             break;
//         case 9:
//             cout<<"September = "<<day;
//             break;
//         case 10:
//             cout<<"October = "<<day;
//             break;
//         case 11:
//             cout<<"November = "<<day;
//             break;
//         case 12:
//             cout<<"December = "<<day;
//             break;
//     }

//     return 0;
// }