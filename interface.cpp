#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void print(){  //virtual function should always be called with pointer or reference the polymorphism works only then
        cout<<"This is printing from parent class"<<endl;
    }
};
class Child : public Parent{
    public:
    void print() override{
        cout<<"This is printing from Child class"<<endl;
    }
};

int main(){
    // Parent* a = new Parent();
    // a->print();
    Child a;
    a.Parent::print();
}