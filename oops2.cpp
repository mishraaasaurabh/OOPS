#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
     string name;
     double* cgpaptr;
     
    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
        
    }

    // Student(Student &obj){
    //     this->name = obj.name;
    //     this->cgpaptr = obj.cgpaptr; //example of shallow copy because cgpaptr stores the address of cgpa and both the objects the cpga ptrs gets copied like so both the pointers points to the same memory location. so changing other changes the other one.  
    // }
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = new double; // in this case we are allocating the memory for cgpaptr obj sepaarately  not just copying this is deep copy
        *cgpaptr = *obj.cgpaptr; 
    }
    ~Student(){ //its generally good practice to deallocate the memory allocated with new keyword i.e. dynamically allocated memory 2. compiler makes destructor automatically and it does not need to be called by programmer. it is called automatically by compiler.
        cout<<"Hi, This is destructor for "<<name<<"\n";
        delete cgpaptr; //destructor frees only static memory by default, to deallocate dynamically allocated memory we have to do it explicitely inside destructor. 
        // problems memory leal 
    }

    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cpga: "<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Saurabh ",8.6);
    Student s2(s1);
    s1.getinfo();
    *(s2.cgpaptr)=7.8;
    s1.getinfo();
    s2.name = "Rama";
    // s2.getinfo();

    return 0;
}