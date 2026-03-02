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

void changeName(Student &s){ // pass by reference
    s.name = "om";          
}

int main()
{
    // & --> address of
    // * --> derefference
    Student s("dhiraj",21,97.2);

    cout<<s.name<<endl;  // dhiraj

    Student* ptr = &s;
    (*ptr).name = "om";
    cout<<s.name<<endl;

    return 0;
}