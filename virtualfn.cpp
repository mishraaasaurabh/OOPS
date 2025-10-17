#include<bits/stdc++.h>
using namespace std;

//interface is a class with no data members, all pure virtual functions and only functions declarations

class Animal { //a class which contains atleast one pure virtual funtion is known as abstract class
  public:
   virtual void sound() =0;
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;  // Declare a pointer to the base class (Animal)
  Dog d;  // Create an object of the derived class (Dog)
  a = &d;  // Point the base class pointer to the Dog object
  a->sound(); // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version
  return 0;
}

