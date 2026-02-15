#include<iostream>
using namespace std;

//ABSTRACTION
//Abstraction ka matlab hai ki hum complex system ke sirf essential features ko dikhate hain aur baaki details ko chhupate hain. Isse hum system ko asaani se samajh sakte hain aur use kar sakte hain.
//Abstraction ke do tarike hote hain:
/*
1. Data Abstraction (Classes and Objects)
2. Procedural Abstraction (Functions)
*/
//abstraction class
class Shape{
public:
    virtual void draw() = 0; // Pure virtual function for abstraction
};
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle." << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle." << endl;
    }
};

//STATIC
/*
Static ka matlab hai ki ek variable ya function ko class level par define kiya jata hai, na ki object level par. Static members har object ke liye shared hote hain, aur unka memory allocation class ke sath hota hai, na ki individual objects ke sath.
Static members ko access karne ke liye hum class name ka use karte hain, na ki object name ka. Static members ko initialize karna hota hai class ke bahar, aur unka scope class ke andar hota hai.
*/

void counter(){
    static int count = 0; // Static variable to keep track of count
    count++;
    cout << "Count: " << count << endl;
}

class Example {
public:
    static int x; // Declaration of static variable
    static void staticFunction() { // Static member function
        cout << "This is a static function. StaticVar: " << x << endl;
    }
};

int Example::x = 10; // Definition of static variable

//Static objects
class StaticExample {
public:
    StaticExample() {
        cout << "Constructor called for StaticExample object." << endl;
    }
    ~StaticExample() {
        cout << "Destructor called for StaticExample object." << endl;
    }
};

//Friend function and class
class A{
    void secret(){
        cout << "This is a secret function of class A." << endl;
    }
    friend class B; // Friend class declaration
    friend void revealSecret(A &a); // Friend function declaration
};
class B{
public:
    void accessSecret(A &a){
        cout << "Accessing secret function of class A: ";
        a.secret(); // Accessing private member of class A
    }

};
void revealSecret(A &a){
    cout << "Revealing secret function of class A: ";
    a.secret(); // Accessing private member of class A
}

int main(){
    Circle c;
    Rectangle r;
    c.draw(); // Output: Drawing a Circle.
    r.draw(); // Output: Drawing a Rectangle.

    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
    counter(); // Output: Count: 3

    Example::staticFunction(); // Output: This is a static function. StaticVar: 10

    Example e1, e2, e3;
     cout<<e1.x++<<endl; // Output: 10
     cout<<e2.x++<<endl; // Output: 11
     cout<<e3.x++<<endl; // Output: 12
     cout<<Example::x<<endl; // Output: 13


    int a = 0;
    if(a == 0){
        static StaticExample se1; // Static object, constructor called only once
    }
    //cout << "End of main function." << endl; // Destructor for se1 will be called at the end of the program.


    A a1;
    B b1;
    b1.accessSecret(a1); // Accessing secret function of class A through class B
    revealSecret(a1); // Accessing secret function of class A through friend function

    return 0;
}

