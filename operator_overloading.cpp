#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real;
    int imagionary;
public:
    Complex(int a,int b){
        this->real=a;
        this->imagionary=b;
    }
    void print(){
        cout<<"This current number is: "<<this->real<<" + "<<this->imagionary<<"i \n";
    }
    Complex operator+(const Complex&obj){
        return Complex(real + obj.real, imagionary + obj.imagionary);
    }

};

int main(){
    Complex a(2,3);a.print();
    Complex b(1,3);
    b.print();
    Complex c = a+b;   //c++ internal calls a.operator+(b)
    c.print();

}