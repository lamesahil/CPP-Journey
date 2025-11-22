#include<iostream>
#include<cmath>
using namespace std;
int main(){
    /*
    //Break and Continue statements in C++17
    // Break statement
    // The break statement is used to terminate the loop or switch statement
    int i = 1;
    while(i<11){
        if(i==5){
            break; // loop will terminate when i is 5
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"Loop terminated"<<endl;

    //Practice: Write a program where user can enter numbers continuously until they enter a multiple of 10
    int num;

    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num%10==0){
            cout<<"You entered a multiple of 10. Exiting the loop."<<endl;
            break;
        }
        cout<<"You entered: "<<num<<endl;
    }while(true);
    cout<<"Exited the loop."<<endl;
  

    // Continue statement
    // The continue statement is used to skip the current iteration of the loop and move to the next iteration
    for(int j=1;j<=10;j++){
        if(j==3){
            continue; // skip the iteration when j is 3
        }
        cout<<j<<endl;
    }
    cout<<"Loop completed"<<endl;

    // Practice: Write a program to show numbers entered by user except multiples of 5
    int number;
    do{
        cout<<"Enter a number (enter 0 to exit): ";
        cin>>number;
        if(number==0){
            cout<<"Exiting the loop."<<endl;
            break;
        }
        if(number%5==0){
            continue; // skip multiples of 5
        }
        cout<<"You entered: "<<number<<endl;

    
    }while(true);
    cout<<"Exited the loop."<<endl;
    

    //Check this video for better understanding: https://www.youtube.com/watch?v=Z8mM8Y5v6rI&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=7
    //Check this website for better understanding: https://www.geeksforgeeks.org/break-and-continue-statements-in-cpp/
    //Check this website for better understanding: https://www.programiz.com/cpp-programming/statements-iterations


    //check if a number is prime or not using break statement

    int num1;
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>num1;
    bool isPrime = true;
    for(int x = 2; x<=num1-1; x++){
        if (num1%x==0){ //i is factor of num1; i is not prime
            isPrime = false;
            break;
        }
        else{
            isPrime = true;
        }

    }
    if(isPrime){
        cout<<num1<<" is a prime number"<<endl;
    }
    else{
        cout<<num1<<" is not a prime number"<<endl;
    }

    //another way to check if a number is prime or not using break statement
    int num2;
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>num2;
    bool isPrime2 = true;
    for(int y=2; y<=sqrt(num2); y++){
        if(num2%y==0){
            isPrime2 = false;
            break;
        }
    }
    if(isPrime2){
        cout<<num2<<" is a prime number"<<endl;
    }
    else{
        cout<<num2<<" is not a prime number"<<endl;
    }
    */

    //Exercise Question.
    //Write a program to find  the Factorial of a number entered by the user. (e.g. 5! = 5*4*3*2*1 = 120)
    int factNum;
    cout<<"Enter a number to find its factorial: ";
    cin>>factNum;
    int factorial = 1;
    for(int f=1; f<=factNum;f++){
        factorial = factorial * f;
    }
    cout<<"The factorial of "<<factNum<<" is "<<factorial<<endl;

    //Write a program to print the multiplication table of a number entered by the user. (e.g. 5*1=5, 5*2=10, 5*3=15, ..., 5*10=50)
    int tableNum;
    cout<<"Enter a number to print its multiplication table: ";
    cin>>tableNum;
    for(int t=1; t<=10; t++){
        cout<<tableNum<<" * "<<t<<" = "<<tableNum*t<<endl;
    }

    //Write a program to input a number and check whether the number is an armstrong number or not. (e.g. 153 = 1^3 + 5^3 + 3^3 = 153, 370 = 3^3 + 7^3 + 0^3 = 370)
    int armNum;
    cout<<"Enter a number to check if it is an armstrong number or not: ";
    cin>>armNum;
    int ogArmNum = armNum;
    int sum = 0;
    while(armNum>0){
        int digit = armNum%10;
        sum = sum + (digit*digit*digit);
        armNum = armNum/10;
    }
    if(sum==ogArmNum){
        cout<<ogArmNum<<" is an armstrong number"<<endl;
    }
    else{
        cout<<ogArmNum<<" is not an armstrong number"<<endl;
    }

    //For a positive N, write a program that prints all the prime numbers from 2 to N.
    int N;
    cout<<"Enter a positive number N to print all prime numbers from 2 to N: ";
    cin>>N;
    for(int num=2; num<=N; num++){
        bool isPrime = true;
        for(int div=2; div<=sqrt(num); div++){
            if(num%div==0){
                isPrime = false;
                break;
            }

        }
        if(isPrime){
            cout<<num<<" ";
        }
    }
    cout<<endl;
    cout<<"All prime numbers from 2 to "<<N<<" are printed above."<<endl;

    //For a positive integer N, write a program to print the Fibonacci series up to N terms. (e.g. 0, 1, 1, 2, 3, 5, 8, 13, 21, ...)
    int fibN;
    cout<<"Enter a positive integer N to print the Fibonacci series up to N terms: ";
    cin>>fibN;
    int t1 = 0, t2 = 1, nextTerm;
    cout<<"Fibonacci Series: "<<endl;
    for(int f=1; f<=fibN; f++){
        cout<<t1<<" ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout<<endl;
    
    

    return 0;
}