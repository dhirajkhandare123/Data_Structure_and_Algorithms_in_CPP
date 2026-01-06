// Take input marks of a student and print the grade according to marks
/*
1) 91-100 exellent
2) 81-90 Verry good.
3) 71-80 Good.
4) 61-70 Can do better.
5) 51-60 Average.
6) 40-50 below average.
7) <40 Fail.
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Exellent";
    }
    else{
        if(n>=81){
            cout<<"Verry good.";
        }
        else{
            if(n>=71){
                cout<<"Good.";
            }
            else{
                if(n>=61){
                    cout<<"Can do better.";
                }
                else{
                    if(n>=51){
                        cout<<"average.";
                    }
                    else{
                        if(n>=41){
                            cout<<"below average.";
                        }
                        else{
                            cout<<"Fail.";
                        }
                    }
                }
            }
        }
    }
    return 0;
}