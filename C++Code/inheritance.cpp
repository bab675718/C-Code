#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int id;

    public:
    Person(string name, int id): name(name),id(id){
        cout<<"Base class"<<endl;
    }
};
class Student: public Person{
    private:
    int marks;

    public:
    Student(string name, int id, int marks): Person(name,id), marks(marks){
        cout<<"Derived class"<<endl;
    }
    void print(){
        cout<<name<<" "<< id<<" "<< marks;
    }
};
int main(){
    Student s1("arbab",10,54);
    s1.print();


    return 0;
}