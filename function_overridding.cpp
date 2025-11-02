#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
virtual void speak()=0;
};

class Human : public Animal{
    public:
    void speak() override {
        cout<<"Hi There I Speak like this. \n";
    }
};

class Dog : public Animal{
    public:
    void speak() override {
        cout<<"Bhau Bhau Bhau ...\n";
    }
};



int main(){

    Human a;
    a.speak();
    Human* c = new Human; //c is pointer stored in stack of heap allocated memory
    c->speak(); //with pointer can't use . operator use ->
    Dog b;
    b.speak();
    delete c;
    return 0;
}