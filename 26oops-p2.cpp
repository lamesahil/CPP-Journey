#include <iostream>
using namespace std;

//Constructors
/* A constructor is a special member function that is automatically called when an object of a class is created. 
   It is used to initialize the objects of a class. 
   A constructor has the same name as the class and does not have a return type.
*/
/* Types of constructors:
   1. Default Constructor: A constructor that takes no parameters.
   2. Parameterized Constructor: A constructor that takes parameters to initialize the object with specific values.
   3. Copy Constructor: A constructor that creates a new object as a copy of an existing object.
*/

// Example of a class with different types of constructors
class car {
    private:
        string brand;
        string model;
        int year;

    public:
    //when we create an object of the class, the constructor is automatically called to initialize the object.
    /* Access Specifiers:
         1. Public: Members declared as public are accessible from outside the class.
         2. Private: Members declared as private are accessible only within the class.
        3. Protected: Members declared as protected are accessible within the class and by derived classes.
    */
        // Default constructor
        car() {
            brand = "Unknown";
            model = "Unknown";
            year = 0;
            cout << "Default constructor called! also known as non-parameterized constructor" << endl;
        }

        // Parameterized constructor
        car(string brand, string model, int year) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            cout << "Parameterized constructor called!" << endl;
        }

        // Copy constructor
        car(const car &c) {
            brand = c.brand;
            model = c.model;
            year = c.year;
            cout << "Copy constructor called!" << endl;
        }

        void displayInfo() {
            cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        }
};

class Student{
    private:
        string name;
        int age;

    public:
        // Default constructor
        Student() {
            cout<<"Welcome to TCET!"<<endl;
        }

        
        void displayInfo() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

//when we call more than one constructor in a class, it is called constructor overloading.

int main() {
    // Creating an object using the default constructor
    car car1;
    car1.displayInfo();

    // Creating an object using the parameterized constructor
    car car2("Toyota", "Corolla", 2020);
    car2.displayInfo();

    // Creating an object using the copy constructor
    car car3 = car2; // This will call the copy constructor
    car3.displayInfo();

    // Creating an object of the Student class to call the default constructor
    Student student1;

    return 0;
}

