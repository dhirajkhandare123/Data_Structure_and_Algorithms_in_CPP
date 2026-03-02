#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rno;
        float marks;

        // garbage values milegi
        // Student(string name, int rno, float marks){
        //     name=name;
        //     rno=rno;
        //     marks=marks;
        // }

        Student(string name, int rno, float marks){
            this->name=name;
            this->rno=rno;
            this->marks=marks;
        }


};

int main()
{
    Student s("dhiraj",21,97.2);

    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
    return 0;
}