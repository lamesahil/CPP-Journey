#include <iostream>
using namespace std;
void oodOReven(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    // Using bitwise AND to check if the number is odd or even
    if (number & 1) { // If the least significant bit is 1, the number is odd
        cout << number << " is odd." << endl;
    } else {
        cout << number << " is even." << endl;
    }
}

int ithBitSet(int num, int  i){
    // Check if the ith bit is set (1) or not (0)
    int mask = 1 << i; // Create a mask by left shifting 1 by i positions
    if (!(num & mask)) {
        return 0; // ith bit is set
    } else {
        return 1; // ith bit is not set
    }
}

int setIthBit(int num, int i){
    // Set the ith bit to 1
    int mask = 1 << i; // Create a mask by left shifting 1 by i positions
    return num | mask; // Use bitwise OR to set the ith bit
} 

int clearIthBit(int num, int i){
    // Clear the ith bit to 0
    int mask = ~(1 << i); // Create a mask by left shifting 1 by i positions and then negating it
    return num & mask; // Use bitwise AND to clear the ith bit
}

bool isPowerOfTwo(int n){
    // A number is a power of two if it has exactly one bit set in its binary representation
    if(!(n&(n-1))){
        return true;
    }else{
        return false;
}
}

void updateIthBit(int num, int i, int v){
    // Update the ith bit to value v (0 or 1)
    int mask = ~(1 << i); // Create a mask to clear the ith bit
    num = (num & mask) | (v << i); // Clear the ith bit and set it to v
    cout<<num<<endl;
}

void clearLastIBits(int num, int i){
    // Clear the last i bits of the number
    int mask = ~0 << i; // Create a mask by left shifting -1 by i positions
    num = num & mask; // Use bitwise AND to clear the last i bits
    cout<<num<<endl;
}

int countSetBits(int n){
    int count = 0;
    while(n){
        count += n & 1; // Increment count if the least significant bit is 1
        n >>= 1; // Right shift n to process the next bit
    }
    return count;
}
int main(){
    // Bitwise Operators in C++
    /* Bitwise operators perform operations on individual bits of integer data types.
       They are used for low-level programming, optimization, and manipulating data at the bit level.
    */

    //And Operator (&)
    int a = 5;      // Binary: 0101
    int b = 3;      // Binary: 0011
    int andResult = a & b; // Binary: 0001 (Decimal: 1)
    cout << "Bitwise AND of " << a << " & " << b << " = " << andResult << endl;
    //Or Operator (|)
    int orResult = a | b; // Binary: 0111 (Decimal: 7)
    cout << "Bitwise OR of " << a << " | " << b << " = " << orResult << endl;
    //Xor Operator (^)  
    int xorResult = a ^ b; // Binary: 0110 (Decimal: 6)
    cout << "Bitwise XOR of " << a << " ^ " << b << " = " << xorResult << endl;
    //Not Operator (~)
    int notResult = ~a; // Binary: 1010 (Decimal: -6)
    cout << "Bitwise NOT of " << a << " = " << notResult << endl;
    //Left Shift Operator (<<)
    // Shifts bits to the left, filling with zeros on the right. Each left shift effectively multiplies the number by 2. Formula: a << n = a * (2^n)
    int leftShiftResult = a << 1; // Binary: 1010 (Decimal: 10)
    cout << "Left Shift of " << a << " << 1 = " << leftShiftResult << endl;
    //Right Shift Operator (>>) 
    // Shifts bits to the right, filling with zeros on the left for unsigned types. Each right shift effectively divides the number by 2. Formula: a >> n = a / (2^n)
    int rightShiftResult = a >> 1; // Binary: 0010 (Decimal: 2)
    cout << "Right Shift of " << a << " >> 1 = " << rightShiftResult << endl;

    oodOReven();
    cout<<ithBitSet(6,2)<<endl; 
    cout<<setIthBit(6,3)<<endl;
    cout<<clearIthBit(6,1)<<endl;
    cout<<isPowerOfTwo(16)<<endl;
    updateIthBit(7,2,0);
    clearLastIBits(15,2);
    cout<<countSetBits(7)<<endl;

    return 0;
}
