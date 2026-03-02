// Here name is not change

#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rno;
        float marks;

        Student(string name, int rno, float marks){
            this->name=name;
            this->rno=rno;
            this->marks=marks;
        }

};

void changeName(Student s){ // Here, s is a copy of the original Student object.
    s.name = "om";          // Any change you make affects only this copy, not 
                            // the original object in main().
}

int main()
{
    Student s("dhiraj",21,97.2);

    cout<<s.name<<endl;

    changeName(s);

    cout<<s.name<<endl;
    return 0;
}