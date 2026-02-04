#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);  //1 1
    v.push_back(2);  //2 2
    v.push_back(13); //3 4
    v.push_back(42); //4 4
    v.push_back(11); //5 8
    v.push_back(90); //6 8
    v.push_back(45); // 7 8
    v.push_back(56); // 8 8
    v.push_back(78); // 9 16
    v.push_back(51); // 10 16
    v.push_back(18); //
    v.push_back(1); //
    v.push_back(2); //
    v.push_back(13); // 
    v.push_back(42);// 
    v.push_back(11); // 
    v.push_back(90); //
    v.push_back(45); //
    v.push_back(56); //
    v.push_back(78); //
    v.push_back(51); //
    v.push_back(18); //
    v.push_back(80); //

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacty is : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacty is : "<<v.capacity()<<endl;
    
    return 0;
}