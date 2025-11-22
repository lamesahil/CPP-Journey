#include<iostream>
using namespace std;
/*
int main(){
    
    int a=10;
    //cout<<&a<<endl; //address of a
    int *p=&a; //pointer p 
    cout<<p<<"="<<&a<<endl; //address of a
    int pi = 3.14;
    int *ptr = &pi;
    int **pp = &p; //pointer to pointer
    cout<<pp<<"="<<&p<<endl; //address of pointer p
    int **ptrr = &ptr; //pointer to pointer
    cout<<ptrr<<"="<<&ptr<<endl; //address of pointer ptr
    cout<<ptr<<"="<<&pi<<endl; //address of pi
    //cout<< sizeof(p)<<endl; //size of pointer
    //cout<< sizeof(ptr)<<endl; //size of pointer

    //Dereferencing
    int b=10;
    int *ptr=&b; //pointer p
    cout<<ptr<<"="<<&b<<endl; //address of b
    cout<<b<<endl; //value of b
    cout<<*ptr<<"="<<*(&b)<<endl; //value at address p

    //Null pointer
    int *p = NULL; //null pointer
    cout<<p<<endl;
    //cout<<*p<<endl; //segmentation fault

    //Value vs Reference
void changeA(int a){
    a = 20;
    cout<<a<<endl;
}

//pass by reference using pointers
void change_A(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}
int main(){
    int a = 10;
    changeA(a);
    cout<<a<<endl;
    change_A(&a);
    cout<<a<<endl;
    return 0;
}
*/ 
//Reference variable
//A reference variable is an alias(name) for another variable. Once a reference is initialized to a variable, it cannot be changed to refer to another variable. It must be initialized when it is created.


//pass by reference using reference variable
void change_A(int &ref){
    ref = 28;
    cout<<ref<<endl;
}
int main(){
    int a=10;
    int &b=a; //reference variable b is an alias for a
    b = 20; //changing the value of b will also change the value of a
    cout<<a<<endl; //20
    cout<<b<<endl; //20
    b++; //incrementing b will also increment a
    cout<<a<<endl; //21
    cout<<b<<endl; //21
    change_A(a);
    cout<<a<<endl; //28
    return 0;

}