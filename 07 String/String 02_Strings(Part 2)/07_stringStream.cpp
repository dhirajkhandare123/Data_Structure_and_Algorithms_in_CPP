// Que. Given a sentence, split every single word of the sentance
// and print in a new line.

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string str = "raghav is a     is maths teeacher";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}