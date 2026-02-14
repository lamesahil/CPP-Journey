#include<iostream>
using namespace std;

//INHERITANCE
//Ek class ko doosri class ke properties aur functions mil jate hain, bina unko dobara likhe.
/*Base Class (Parent)
Derived Class (Child)*/
/* 
            public      protected       private
public      Yes         Yes         No
protected   Yes         Yes         No
private     No          No          No
*/

//types of inheritance
/*
1. Single Inheritance - A class inherits from one base class.
2. Multiple Inheritance - A class inherits from more than one base class.
3. Multilevel Inheritance - A class inherits from a derived class, which in turn inherits from another base class.
4. Hierarchical Inheritance - Multiple classes inherit from a single base class.
5. Hybrid Inheritance - A combination of two or more types of inheritance.
*/

//1. Single Inheritance Example
class Person {
public:
    void eat() {
        cout << "Person is eating." << endl;
    }
};

class Student : public Person { // Student class inherits from Person
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

//2. Multiple Inheritance Example
class Teacher {
public:
    void teach() {
        cout << "Teacher is teaching." << endl;
    }
};
class TA : public Student, public Teacher { // TA class inherits from both Student and Teacher
public:
    void assist() {
        cout << "TA is assisting." << endl;
    }
};

//3. Multilevel Inheritance Example
class GraduateStudent : public Student { // GraduateStudent inherits from Student, which inherits from Person
public:
    void research() {
        cout << "Graduate Student is doing research." << endl;
    }
};

//4. Hierarchical Inheritance Example
class Employee : public Person { // Employee class inherits from Person
public:
    void work() {
        cout << "Employee is working." << endl;
    }
};
class Manager : public Person { // Manager class also inherits from Person
public:
    void manage() {
        cout << "Manager is managing." << endl;
    }
};

//5. Hybrid Inheritance Example
class Admin : public Employee, public Manager { // Admin class inherits from both Employee and Manager  
public:
    void adminTask() {
        cout << "Admin is performing administrative tasks." << endl;
    }
}; 


int main() {
    Student s; //here s is an object of Student class, which has access to both eat() and study() functions due to inheritance.
    s.eat();   // Inherited function from Person
    s.study(); // Own function of Student
    TA ta;
    ta.eat();   // Inherited from Person via Student    
    ta.teach(); // Inherited from Teacher
    ta.assist(); // Own function of TA

    GraduateStudent gs;
    gs.eat();   // Inherited from Person
    gs.study(); // Inherited from Student
    gs.research(); // Own function of GraduateStudent

    Employee e;
    e.eat();   // Inherited from Person
    e.work();  // Own function of Employee

    Manager m;
    m.eat();   // Inherited from Person
    m.manage(); // Own function of Manager

    Admin a;
    //a.eat();   // Inherited from Person
    a.work();  // Inherited from Employee
    a.manage(); // Inherited from Manager
    a.adminTask(); // Own function of Admin
    
   

    return 0;
}