#include<iostream>
using namespace std;
int main(){
    //Conditional Statements in C++17
    // If statement
    // The if statement is used to execute a block of code if a specified condition is true
    // Syntax:
    // if(condition){
    //     // code to be executed if condition is true
    // }
    float percentage;
    cout<<"Enter your percentage: ";
    cin>>percentage;
    //Find grade
    if(percentage >= 90){
        cout<<"Grade: A+"<<endl;
    }
    else if(percentage >= 80){
        cout<<"Grade: A"<<endl;
    }
    else if(percentage >= 70){
        cout<<"Grade: B+"<<endl;
    }
    else if(percentage >= 60){
        cout<<"Grade: B"<<endl;
    }
    else if(percentage >= 50){
        cout<<"Grade: C"<<endl;
    }
    else if(percentage >= 40){
        cout<<"Grade: D"<<endl;
    }
    else{
        cout<<"Grade: F"<<endl;
    }

    // Switch statement
    // The switch statement is used to execute one block of code among many options based on the value of a variable
    // Syntax:  
    // switch(variable){
    //     case value1:
    //         // code to be executed if variable == value1
    //         break;
    //     case value2:
    //         // code to be executed if variable == value2
    //         break;
    //     ...
    //     default:
    //         // code to be executed if variable doesn't match any case
    // }

    int day;
    cout<<"Enter day number (1-7): ";
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day number"<<endl;
    }
    return 0;

}