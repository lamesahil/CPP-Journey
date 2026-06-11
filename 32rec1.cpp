#include<iostream>
using namespace std;

int fxn(int n){
if(n==0 || n==1){
    return 1;
}
else{
    return n*fxn(n-1);
}
}

void print(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" "; //print n first and then call the function for n-1 to print the next number in the sequence
        print(n-1);
    }
}

void printReverse(int n){
    if(n==0){
        return;
    }
    else{
        printReverse(n-1); //iska matlab pehle function call hoga aur jab n=0 hoga tab return hoga aur uske baad print hoga, isse pehle 1 print hoga phir 2 print hoga and so on until n is printed
        cout<<n<<" ";
    }
}

int sum(int n){
	if (n==0)
		return 0;
	else
		return n + sum(n-1);
};

//fibonacci series is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The function below calculates the nth Fibonacci number using recursion. Note that this implementation is not efficient for large values of n due to repeated calculations, but it serves as a simple example of recursion.
int fib(int n){
	if (n==0)
		return 0;
    else if (n==1)
        return 1;
	else
		return fib(n-1) + fib(n-2);

};

int main()
{
    int n;
    cout<<"Enter the number to get factorial: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fxn(n)<<endl;
    cout<<"Numbers from "<<n<<" to 1 are: ";
    print(n);
    cout<<"\nNumbers from 1 to "<<n<<" are: ";
    printReverse(n);
    cout<<"\nSum of first "<<n<<" natural numbers is: "<<sum(n)<<endl;
    cout<<"\nFibonacci of "<<n<<" is: "<<fib(n)<<endl;
    return 0;
}