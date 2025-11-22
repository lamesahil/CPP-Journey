#include<iostream>
using namespace std;
int main(){
    //Calculator using switch case in C++17
    char op;
    float num1, num2, result;
    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter Second number: ";
    cin>>num2;
    switch(op){
        case '+':
            result = num1 + num2;
            cout<<"Result: "<<result<<endl;
            break;
        case '-':
            result = num1 - num2;
            cout<<"Result: "<<result<<endl;
            break;
        case '*':
            result = num1 * num2;
            cout<<"Result: "<<result<<endl;
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                cout<<"Result: "<<result<<endl;
            }
            else{
                cout<<"Error: Division by zero"<<endl;
            }
            break;
        default:
            cout<<"Error: Invalid operator"<<endl;
    }
}