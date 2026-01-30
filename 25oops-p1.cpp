#include <iostream>
using namespace std;

// Defining a class named Carclass Car 
class Car {
    public:
        string brand;
        string model;
        int year;

        void displayInfo() {
            cout << "Car Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        }
    };

class user {
    private:
        int id;
        string password;

    public:
        string username;
        user(int id) {
            this->id = id; //left is class member, right is parameter
        }

        string getPassword() {
            return password;
        }
        void setPassword(string pass) {
            password = pass;
        }
};
int main(){
    //OOPS in C++
    /* Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to represent data and methods to manipulate that data.
       C++ is a multi-paradigm programming language that supports OOP features such as classes, inheritance, polymorphism, encapsulation, and abstraction.
    */


    // Classes and Objects
    /* A class is a blueprint for creating objects. An object is an instance of a class. */

    //Access Specifiers
    /* Access specifiers define the accessibility of class members. The three access specifiers in C++ are:
       1. Public: Members declared as public are accessible from outside the class.
       2. Private: Members declared as private are accessible only within the class.
       3. Protected: Members declared as protected are accessible within the class and by derived classes.
    */
    
    Car car1; // Creating an object of the Car class
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.displayInfo();

    //getter and setter methods
    class Person {
        private:
            string name;
            int age;

        public:
            // Setter for name
            void setName(string n) {
                name = n;
            }

            // Getter for name
            string getName() {
                return name;
            }

            // Setter for age
            void setAge(int a) {
                if(a >= 0) { // Basic validation
                    age = a;
                }
            }

            // Getter for age
            int getAge() {
                return age;
            }
    };
    Person person1; // Creating an object of the Person class
    person1.setName("Chinu");
    person1.setAge(19);
    cout << "Person Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;

    //Encapsulation
    /* Encapsulation is the concept of wrapping data and methods into a single unit (class).
       It restricts direct access to some of the object's components and can prevent the accidental modification of data.
    */
   //Constructor
   /* A constructor is a special member function that is automatically called when an object of the class is created.
      It is used to initialize the object's data members.   
    */
   /*types of constructors*/
   // Default constructor
   // Parameterized constructor
   // Copy constructor

    // Example of Encapsulation & constructor
    class BankAccount {
        private:
            double balance;

        public:
            BankAccount() : balance(0.0) {} // Constructor to initialize balance

            void deposit(double amount) {
                if(amount > 0) {
                    balance += amount;
                }
            }

            void withdraw(double amount) {
                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                }
            }

            double getBalance() {
                return balance;
            }
    };
    BankAccount account; // Creating an object of the BankAccount class
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Account Balance: $" << account.getBalance() << endl;
    user u1(1);
    u1.username = "myUser";
    cout << "Username: " << u1.username << endl;
    u1.setPassword("newPassword");
    cout << "Password: " << u1.getPassword() << endl;
    user u2(2);
    u2.username = "anotherUser";
    cout << "Username: " << u2.username << endl;
    u2.setPassword("anotherPassword");
    cout << "Password: " << u2.getPassword() << endl;

    return 0;
}