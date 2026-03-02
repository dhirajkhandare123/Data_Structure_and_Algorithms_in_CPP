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

void changeName(Student* s){ 
    // (*s).name="oma";
    s->name="om";  
}

int main()
{

    Student s("dhiraj",21,97.2);

    cout<<s.name<<endl;  // dhiraj

    changeName(&s);
    cout<<s.name<<endl;

    return 0;
}