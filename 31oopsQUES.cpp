#include<iostream>
using namespace std;

//QUESTION 1:
/*
Question 1 : Create a class to store Complex numbers. Using operator overloading,
create the logic to subtract one complex number from another.
Note - In Complex numbers, the real part of 1st gets subtracted from the real part of
2nd number. Same goes for the imaginary part.
*/

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
    //operator overloading for subtraction
    Complex operator - (Complex &c2){
        Complex res;
        res.real = real - c2.real;
        res.imag = imag - c2.imag;
        return res;
    }
};


//QUESTION 2:
/*Question 2 : Create a class BankAccount with private attributes accountNumber and
balance. Implement public methods deposit(), withdraw(), and getBalance() to
manage the account.
*/
class BankAccount{
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum, double initialBalance) {
        this->accountNumber = accNum;
        this->balance = initialBalance;
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
    double getBalance(){
        return balance;
    }
};

//QUESTION 3 : 
/*Question 3 : Create a base class Person with attributes name and age.
Derive a class Student from Person and add an additional attribute studentID.
Implement a method displayStudentInfo( ) in the Student class to display all details.
In main function Student class object will be created in this format:
Student student("Alice", 20, "S12345");
Note - When we initialize an object of a derived class, the base class part has to be
constructed first.
If we don't initialize it ourselves in the derived class' constructor by calling one of its
constructors, the compiler will attempt to use the default constructor of the base
class.
To invoke the parent’s parameterized constructor in Child’s constructor, syntax is :
Child(int x) : Parent(x)
{ …… }
*/

 class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    //same as Person(string n, int a){ name = n; age = a; }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
    string studentID;
public:
    Student(string n, int a, string id) : Person(n, a), studentID(id) {}//parent(n, a) ko call kar diya, ab hume name aur age ko initialize karne ki zarurat nahi hai. 

     //same as Student(string n, int a, string id) : Person(n, a){ studentID = id; }
    void displayStudentInfo() {
        displayInfo(); // Call base class method to display name and age
        cout << "Student ID: " << studentID << endl;
    }
};


int main() {
    Complex c1(5, 3), c2(2, 1);
    Complex result = c1 - c2; // Using overloaded operator
    cout << "Result of subtraction: ";
    result.display();

    BankAccount account(12345, 1000.0);
    account.deposit(500.0); // Deposit money
    account.withdraw(200.0); // Withdraw money
    cout << "Current Balance: " << account.getBalance() << endl; // Get current balance

    Student student("Alice", 20, "S12345");
    student.displayStudentInfo(); // Display student information

    return 0;
}