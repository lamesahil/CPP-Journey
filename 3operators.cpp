#include<iostream>
using namespace std;
int main(){
    /*
    // Two variables in C++17
    int a = 5;
    int b = 10;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

    // Swapping values of two variables using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout<<"After swapping:"<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
*/
    //Types of Operators in C++17
    // Arithmetic Operators: +, -, *, /, %, ++, --
    int x = 10;
    int y = 3;
    cout<<"x + y = "<<x + y<<endl;
    cout<<"x - y = "<<x - y<<endl;
    cout<<"x * y = "<<x * y<<endl;
    cout<<"x / y = "<<x / y<<endl;
    cout<<"x % y = "<<x % y<<endl;
    cout<<"++x = "<<++x<<endl; // Pre-increment
    cout<<"y-- = "<<y--<<endl; // Post-decrement
    cout<<"Value of y after post-decrement: "<<y<<endl;

    // Assignment Operators: =, +=, -=, *=, /=, %=
    int a = 5;
    a += 3; // a = a + 3
    cout<<"Value of a after a += 3: "<<a<<endl;
    a *= 2; // a = a * 2
    cout<<"Value of a after a *= 2: "<<a<<endl;
    a -= 4; // a = a - 4
    cout<<"Value of a after a -= 4: "<<a<<endl;
    a /= 2; // a = a / 2
    cout<<"Value of a after a /= 2: "<<a<<endl;
    a %= 3; // a = a % 3
    cout<<"Value of a after a %= 3: "<<a<<endl;


    // Relational Operators: ==, !=, >, <, >=, <=
    int p = 10;
    int q = 20;
    cout<<"p == q: "<<(p == q)<<endl;
    cout<<"p != q: "<<(p != q)<<endl;
    cout<<"p > q: "<<(p > q)<<endl;
    cout<<"p < q: "<<(p < q)<<endl;
    cout<<"p >= q: "<<(p >= q)<<endl;
    cout<<"p <= q: "<<(p <= q)<<endl;

    // Logical Operators: &&, ||, !
    bool r = true;
    bool s = false;
    cout<<"r && s: "<<(r && s)<<endl;
    cout<<"r || s: "<<(r || s)<<endl;
    cout<<"!r: "<<(!r)<<endl;
    cout<<"!s: "<<(!s)<<endl;

    //Unary Operators: +, -, ++, --, !
    int m = 5;
    cout<<"+m: "<<(+m)<<endl;
    cout<<"-m: "<<(-m)<<endl;
    cout<<"++m: "<<(++m)<<endl; // Pre-increment
    cout<<"--m: "<<(--m)<<endl; // Pre-decrement
    cout<<"!true: "<<(!true)<<endl;
    cout<<"!false: "<<(!false)<<endl;

    //Ternary Operator: ?:
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    string eligibility = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout<<eligibility<<endl;


    return 0;
}