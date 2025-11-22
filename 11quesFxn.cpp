#include<iostream>
using namespace std;
/*
//WAF to check if a number is palindrome or not
bool isPalindrome(int n){
    int original = n;
    int reversed = 0;
    while(n>0){
        int digit = n%10;
        reversed = reversed*10 + digit;
        n = n/10;
    }
    if(reversed == original){
        return true; //palindrome
    }
    else{
        return false; //not palindrome
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    
    
    return 0;
}
*/
//Write a function to calculate the sum of digits of a number.
int digSum(int n){
    int sum=0;
    while(n>0){
       sum = sum + n%10;
       n = n/10; 
    }
    return sum;

}
//Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.
int pro(int a, int b){
    return a*a + b*b + 2*a*b; //(a+b)^2
}
//Write a function that prints the largest of 3 numbers
int largest(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}
// Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
char nxtChar(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    else{
        return ch + 1;
    }
}
