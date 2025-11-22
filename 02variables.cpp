#include<iostream>
using namespace std;
int main(){
    //Print average marks of five subjects
    int marks1, marks2, marks3, marks4, marks5;
    cout<<"Enter marks of English subjects: ";
    cin>>marks1;
    cout<<"Enter marks of Math subjects: ";
    cin>>marks2;
    cout<<"Enter marks of Physics subjects: ";
    cin>>marks3;
    cout<<"Enter marks of Chemistry subjects: ";
    cin>>marks4;
    cout<<"Enter marks of Computer subjects: ";
    cin>>marks5;
    float avg = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;
    cout<<"Average marks: "<<avg<<endl;
    //Find percentage
    float percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 500.0 * 100;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    
    return 0;
}