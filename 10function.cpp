#include<iostream>
using namespace std;
/*
void sayHi(){ //Function definition
    cout<<"Hello User!:)"<<endl;  //Function body
}
void assistant(){
    sayHi(); //Function call
    cout<<"Work done!"<<endl;
}
int main(){    
    assistant(); //Function call
*/


//LECTURE 3: FUNCTIONS WITH PARAMETERS AND RETURNING VALUES

/*
int sum(int a, int b=1){ //Function with parameters and default argument also we can have multiple default arguments but from right to left only we cant give default argument to left side parameter
    int sum = a + b;
    return sum; //Returning value from function
}
int diff(int a, int b){ //Function with parameters
    int diff = a - b;
    return diff; //Returning value from function
}
int main(){
    cout<<"Enter two numbers: ";
    int num1, num2;
    sum(num1); //Function call with arguments
    diff(num1, num2); //Function call with arguments
    cin>>num1>>num2;
    cout<<"The sum is: "<<sum(num1)<<endl; //Function call inside cout statement
    cout<<"The difference is: "<<diff(num1, num2)<<endl; //Function call inside cout statement
    //Difference between parameters and arguments
    //Parameters are the variables defined in the function declaration/definition  
    //Arguments are the actual values passed to the function when it is called

    return 0;
    */
//LECTURE 4: Practice Set 
/*
//WAF to find the product of two numbers using a function

int product(int a, int b){
    return a*b;
}

//WAF to print if a number is odd or even
bool isEven(int a){
    if(a%2==0){
        return true; //true
    }
    else{
        return false; //false
    }
}
int main(){
    int s = product(6, 9);
    cout<<"The product is: "<<s<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isEven(num)){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
*/
//LECTURE 5
//WAF to find the factorial of a number
/*
int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial*i;
    }
    return factorial;
} 
int main(){
    int num;
    cout<<"Enter a number: ";   
    cin>>num;
    cout<<"The factorial of "<<num<<" is: "<<fact(num)<<endl;

    return 0;
}
*/
    //LECTURE 6: Function call in memory
    // till function call the memory is allocated in stack memory
    // when function is called the memory is allocated in heap memory
    //stack memory is used for static memory allocation and heap memory is used for dynamic memory allocation
    // current function is at the top of the stack
    // when function execution is done the function is removed from the stack
    // after function execution the memory is deallocated from heap memory
    // after function execution the memory is deallocated from stack memory

    //LECTURE 7: SCOPE(Global and Local variables)
    //scope is area of code where a variable is accessible as used
    //loal variable is a variable defined inside a function or block and can be accessed only inside that function or block 
    //example of local variable: function parameters, loop variables, if else block variables,{ }etc
    //global variable is a variable defined outside all functions and can be accessed from any function in the program
    //example of global variable: variable defined outside all functions

//Local scope
/*
void sum(int a, int b){ //Function with parameters
    int result = a + b; //local variable
    cout<<"The sum is: "<<result<<endl;
}

//Global scope
int num = 10; //global variable
void sum2(int n1, int n2){
    cout<<"The sum is: "<<n1+n2<<endl;
    cout<<"The global variable is: "<<num<<endl;
}
int main(){
    sum(3, 5); //Function call with arguments
    cout<<sum; //error: 'sum' was not declared in this scope because sum is a function not a variable
    //cout<<result; //error: 'result' was not declared in this scope because result is a local variable
    

    return 0;
}    
*/
//LECTURE 8: WAF to print if a number is prime or not
/*bool isPrime(int n){
    for(int i=2; i<=n-1; i++){
        if(n==1){
            return false; //1 is neither prime nor composite
        }
        if(n%i==0){
            return false; //not prime
        }
    }
    return true; //prime
}
bool isPrime2(int n){ //optimized version
    for(int i =2; i*i<=n; i++){ //i*i<=n is same as i<=sqrt(n) but we are avoiding the use of sqrt function
        if(n==1){
            return false; //1 is neither prime nor composite
        }
        if(n%i==0){
            return false; //not prime
        }
        
    }
    return true; //prime
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not prime"<<endl;
    }


    return 0;
}
    */
   //LECTURE 9: Binomial Coefficient
   //nCr = n!/(r!*(n-r)!)
   /*
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int binomial(int n, int r){
    int v1 = factorial(n);
    int v2 = factorial(r);
    int v3 = factorial(n-r);
    int ncr = v1/(v2*v3);
    return ncr;
}
int main(){
    int n, r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    cout<<"The value of "<<n<<"C"<<r<<" is: "<<binomial(n, r)<<endl;

    return 0;
}
*/

//LECTURE 10: FUNCTION OVERLOADING
//Function overloading is a feature in C++ that allows us to have more than one function with the same name but different parameters
//Function overloading is a compile time polymorphism

//Lecture 11: Practice Set
//Print all primes in a given range
bool isPrime(int n){
    if(n==1){
        return false; //1 is neither prime nor composite
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false; //not prime
        }
    }
    return true; //prime
}

void allPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    allPrime(num);

    return 0;
}