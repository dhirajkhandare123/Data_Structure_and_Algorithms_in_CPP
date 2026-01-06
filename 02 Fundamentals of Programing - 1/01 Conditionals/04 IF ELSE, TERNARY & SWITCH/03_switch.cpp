#include <iostream>
using namespace std;

int main(){
    cout<<"1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday"<<endl;
    cout<<"Enter day number: ";
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"****Monday****";
            break;
        case 2:
            cout<<"****Tuesday****";
            break;
        case 3:
            cout<<"****Wednesday****";
            break;
        case 4:
            cout<<"****Thursday****";
            break;
        case 5:
            cout<<"****Friday****";
            break;
        case 6:
            cout<<"****Saturday****";
            break;
        case 7:
            cout<<"****Sunday****";
            break;
        default:
            cout<<"Enter valid number";
            break;
    }
    return 0;
}