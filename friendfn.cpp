#include <bits/stdc++.h>
using namespace std;

class Complex;

class Calc{
    public:
    Complex addRealPart(Complex a1, Complex a2);

};

class Complex
{
    int a, b;
    friend Complex Calc :: addRealPart(Complex a1, Complex a2);
public:
    Complex(int a = 10, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    void shownum()
    {
        cout << "The complex number is: " << a << " + i" << b << endl;
    }
    void setdate(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

Complex Calc:: addRealPart(Complex a1, Complex a2){
        Complex res(0,0);
        res.a=(a1.a+a2.a);
        res.b=(a1.b+a2.b);
        
        return res;
    }


int main()
{

    Complex a(1, 1);
    Complex b(21, 21);
    Calc calc;
    Complex c= calc.addRealPart(a,b);
    // cout<<x<<endl;
    c.shownum();
    // a.setdate(4, 5);
    // a.shownum();
    return 0;
}