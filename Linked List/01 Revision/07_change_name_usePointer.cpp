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
    s->name="om";  
}

int main()
{

    Student *ptr = new Student("dhiraj",21,97.2); // dynamic memory allocation
    // new Student(....) ---> Heap memory me naya Student object create hota hai.
     
    cout<<ptr->name<<endl;  // dhiraj
    changeName(ptr);
    cout<<ptr->name<<endl;

    return 0;
}