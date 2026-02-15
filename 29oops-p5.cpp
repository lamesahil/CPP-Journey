#include<iostream>
using namespace std;

//POLYMORPHISM
//Ek function ya operator ke multiple forms hote hain, jise hum alag-alag tarike se use kar sakte hain.
//Types of Polymorphism
/*
1. Compile-time Polymorphism (Function Overloading, Operator Overloading)
2. Run-time Polymorphism (Virtual Functions)
*/
//1. Compile-time Polymorphism Example
class Printer {
public: 
    //function overloading
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(string str) {
        cout << "String: " << str << endl;
    }
};

class Complex{
    int real, imag;
public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    } 
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
    //operator overloading
    Complex operator + (Complex const &c2){
        Complex res;
        res.real = real + c2.real;
        res.imag = imag + c2.imag;
        return res;
    }
};

//2. Run-time Polymorphism Example
class Base {
public:
    void show() { 
        cout << "Base class show function." << endl;
    }
    virtual void hello() { // Virtual function for run-time polymorphism
        cout << "Hello from Base class." << endl;
    }
};
class Derived : public Base {
public:
    void show(){ 
        cout << "Derived class show function." << endl;
    }
    void hello(){ 
        cout << "Hello from Derived class." << endl;
    }
};


//In the above code, we have demonstrated both compile-time and run-time polymorphism. The Printer class shows function overloading, while the Complex class demonstrates operator overloading. The Base and Derived classes illustrate run-time polymorphism using virtual functions.

int main() {
    Printer p;
    p.show(5); // Calls the integer version
    p.show("Hello"); // Calls the string version

    Complex c1(3, 4), c2(1, 2);
    c1.display(); // Displays 3 + 4i
    c2.display(); // Displays 1 + 2i
    Complex c3 = c1 + c2; // Uses overloaded + operator
    c3.display(); // Displays 4 + 6i

    Derived d;
    d.show(); // Calls derived class show function
    Base *ptr = &d; // Base class pointer pointing to derived class object
    ptr->show(); // Calls base class show function (compile-time binding)
    ptr->hello(); // Calls derived class hello function (run-time polymorphism)

    
    return 0;
}