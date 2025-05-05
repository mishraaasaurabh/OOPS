#include<iostream>
#include<string>
using namespace std;

class Teacher{
    double salary;
    public: 
        // non parameterized
        Teacher(){ //constructor same as class name ans no return type if constructor not created compiler by default creates a constructor function
            cout<< "Hi am a constructor\n"; //constructor is only called once on object creation. memory allocation happens when construcot is called

            dept = "Electronics and Communication\n";
        }
        // parameterized
        Teacher(string name,string dept,string subject,double salary){
            this->name=name;
            this->dept=dept;
            this->salary=salary;
            this->subject=subject;
        }
        string name;
        string dept;
        string subject;

        void changedept(string curdept){
            dept = curdept;
        }

        double getsalary(){ //getter function 
            return salary;
        }

        void setsalary(double nsal){ // setter function
            salary=nsal;
        }
        void getinfo(){
            cout<<"NAME :"<<name<<endl;
            cout<<"Dept :"<<dept<<endl;
            cout<<"subject :"<<subject<<endl;
            cout<<"Salary :"<<salary<<endl;

        }
        Teacher(Teacher &obj){ //&obj means original obj is passed. 
        cout<<"I am custom copy constructor\n";
        this->name=obj.name;
        this->dept=obj.dept;
        this->subject=obj.subject;
        this->salary=obj.salary;

        }

};

int main(){

    Teacher t1("Saurabh","CSE","C++",78556);
    // t1.getinfo();
    Teacher t2(t1); //default copy constructor is invoked here
    t2.getinfo();


    return 0;
}