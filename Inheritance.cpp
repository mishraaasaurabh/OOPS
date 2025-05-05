#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
//     Person(){
//         cout<<"Parent constructor\n";
//     }
};

class Student : public Person{ // access modifiers : if private the the public properties become private. private properties are never inherited
    public:
    int rollno;

    // Student(){
    //     cout<<"Child Constructor\n";
    // } //always parent constuctor is called first and then child construcor is called    and for destructor this sequence is opposite
 
    Student(string name,int age, int rollno) : Person(name,age){
        this->rollno = rollno;
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
    }
};

//types of inheritence single level, multi level, multiple inheritance, heirarchial inheritance, hybrid inheritance

int main(){
    // Student s1;
    // s1.name= "Rahul";
    // s1.age= 25;
    // s1.rollno= 59;
    Student s2("rahul ranjan",45,145);
    s2.getinfo();
    return 0;
}