//Binary Number System
/*
Binary number system is a base-2 numeral system which uses only two symbols: typically "0" (zero) and "1" (one).
    Each digit is referred to as a bit. The binary system is the foundation of all modern computing and digital electronics, as it is used to represent and manipulate data in computers and other digital devices.
    In binary, each position represents a power of 2, starting from the rightmost position which represents 2^0 (1), the next position to the left represents 2^1 (2), then 2^2 (4), and so on.
    For example, the binary number 1011 represents:
    (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (1 * 2^0) = 8 + 0 + 2 + 1 = 11 in decimal. 
    Binary numbers are commonly used in computer systems for various purposes, including data representation, memory addressing, and logical operations.
    //1 bit can represent two values: 0 and 1.
    //8 bits make a byte, which can represent 256 different values (2^8).
    Here is a simple C++ program that demonstrates how to convert a decimal number to its binary representation:




*/
/*
0001=001=01=1 all means the same in binary number system 

*Binary to Decimal Conversion
-->10010=(1*2^4)+(0*2^3)+(0*2^2)+(1*2^1)+(0*2^0)=16+0+0+2+0=18  [(18)10=(10010)2]

*Decimal to Binary Conversion
Q)18
-->18/2=9  remainder=0
-->9/2=4   remainder=1
-->4/2=2   remainder=0
-->2/2=1   remainder=0
-->1/2=0   remainder=1
-->Reading the remainders from bottom to top, we get 10010.
-->(18)10=(10010)2 

Q)37
-->37/2=18  remainder=1
-->18/2=9   remainder=0
-->9/2=4    remainder=1
-->4/2=2    remainder=0
-->2/2=1    remainder=0
-->1/2=0    remainder=1
-->Reading the remainders from bottom to top, we get 100101.
-->(37)10=(100101)2
Another method is to subtract the largest power of 2 less than or equal to the number and mark a 1 in that position, then repeat for the remainder until you reach 0.
2^5+2^2+2^0=32+4+1=37
-->(37)10=(100101)2
Q)25 
11001 by 2 ka power method
-->25/2=12  remainder=1
-->12/2=6   remainder=0
-->6/2=3    remainder=0
-->3/2=1    remainder=1
-->1/2=0    remainder=1
-->Reading the remainders from bottom to top, we get 11001.
-->(25)10=(11001)2
2^4+2^3+2^0=16+8+1=25
Decimal to Binary Conversion(0 to 16)
-->(0)10=(0000)2
-->(1)10=(0001)2            
-->(2)10=(0010)2
-->(3)10=(0011)2
-->(4)10=(0100)2
-->(5)10=(0101)2
-->(6)10=(0110)2
-->(7)10=(0111)2
-->(8)10=(1000)2
-->(9)10=(1001)2
-->(10)10=(1010)2
-->(11)10=(1011)2
-->(12)10=(1100)2
-->(13)10=(1101)2
-->(14)10=(1110)2
-->(15)10=(1111)2
-->(16)10=(10000)2  

#Data Type Modifiers
    -->short: typically 2 bytes (16 bits)
    -->int: typically 4 bytes (32 bits)
    -->long: typically 4 or 8 bytes (32 or 64 bits, depending on the system)
    -->long long: typically 8 bytes (64 bits)
    -->unsigned: can be applied to any of the above types to allow only non-negative values, effectively doubling the upper limit of positive values that can be represented.
    -->signed: can also be applied to any of the above types (default for int), allowing both positive and negative values.
    -->float: typically 4 bytes (32 bits)
    -->double: typically 8 bytes (64 bits)
    -->long double: typically 8, 12, or 16 bytes (64, 96, or 128 bits, depending on the system)

    __Note__: The exact size of these data types can vary depending on the compiler and the architecture of the system being used. The sizes mentioned above are common but not guaranteed by the C++ standard.
*/
#include <iostream>
using namespace std;
void binaryToDecimal(int n){
    int ans=0;
    int x=1; //2^0
    while(n>0){
        int y=n%10; //last digit
        ans+=x*y; //adding the last digit to the answer
        x*=2; //next power of 2
        n/=10; //removing the last digit
    }
    cout<<"Decimal number is: "<<ans<<endl;
}
void decimalToBinary(int n){
    int ans=0;
    int x=1; //10^0
    while(n>0){
        int y=n%2; //last digit
        ans+=x*y; //adding the last digit to the answer
        x*=10; //next power of 10
        n/=2; //removing the last digit
    }
    cout<<"Binary number is: "<<ans<<endl;
}
int main(){
    // Size of different data types
    /*
    cout<<"Size of short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl; 
    cout<<"Size of long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"Size of long long: "<<sizeof(long long)<<" bytes"<<endl;
    cout<<"Size of unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"Size of signed int: "<<sizeof(signed int)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof(double)<<" bytes"<<endl;
    cout<<"Size of long double: "<<sizeof(long double)<<" bytes"<<endl;
    */

    int a;
    cout<<"Enter a binary number: ";
    cin>>a;
    binaryToDecimal(a);
    int b;
    cout<<"Enter a decimal number: ";
    cin>>b;
    decimalToBinary(b);
    
    return 0;
}