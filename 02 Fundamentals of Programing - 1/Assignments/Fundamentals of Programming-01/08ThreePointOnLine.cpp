#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cout<<"x1: ";
    cin>>x1;
    cout<<"y1: ";
    cin>>y1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;
    cout<<"x3: ";
    cin>>x3;
    cout<<"y3: ";
    cin>>y3;

    int slope1 = (y2-y1)/(x2-x1);
    int slope2 = (y3-y2)/(x3-x2);

    if(slope1==slope2){
        cout<<"Three points lies on same line.";
    }
    else{
        cout<<"Three points does not lies on same line.";
    }
    return 0;
}