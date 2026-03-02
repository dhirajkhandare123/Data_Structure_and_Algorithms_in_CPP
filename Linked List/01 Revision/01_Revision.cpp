#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rno;
        float marks;
};

int main()
{
    Student s;
    s.name="dhiraj";
    s.rno=21;
    s.marks=97.2;

    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
    return 0;
}