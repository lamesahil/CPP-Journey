#include <iostream>
using namespace std;
int main(){
    //loops in C++17
    /*
    //For Loop
    //for(initialization; condition; increment/decrement)
    // Example: Print numbers from 1 to 10
    int i;

    //i can be 0 also but here we want to print from 1 to 5
    for( i = 1; i <= 5; i++){
        cout << "apna college " << i << " times"<< endl;
    }
    cout<<endl;
    cout<<"Value of i after loop: "<<i<<endl;


    //infinite loop
    // for(;;){
    //     cout<<"Hello World"<<endl;
    // }
    // bad practice to use infinite loop


    // Print numbers from 1 to n
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int j=1; j<=n; j++){
        cout<<j<<endl;
    }

    //Print sum of first n natural numbers
    int sum = 0;
    for(int k=1; k<=n; k++){
        sum += k; // sum = sum + k
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;


    // While Loop
    // while(condition){
    //     //code to be executed
    // }
    int count = 1;
    while(count <= 5){
        cout<<"Count is: "<<count<<endl;
        count++;
    }
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    int sums=0;
    int p = 1;
    while (p<=m)
    {
        sums+=p;
        cout<<m<<endl;
        p++;
    }
    cout<<"Sum of first "<<m<<" natural numbers is: "<<sums<<endl;

    //Print the square pattern
    for(int o=1; o<=5; o++){
        cout<<"* * * * *"<<endl;
    }
    

    //Print numebers from n to 1
    for(int i=10; i>=1; i--){
        cout<<i<<endl;
    }

    //Print sum of digits of a number using while loop
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int SUM = 0;
    while(num>0){
        int lastdigit = num % 10;
        cout<<lastdigit<<" ";
        SUM += lastdigit;
        num = num / 10; //num /= 10
    }
    cout<<"\nSum of digits is: "<<SUM<<endl;
  
   
   // Print sum of odd digits of a number using while loop
   int num1;
    cout<<"Enter a number: ";
    cin>>num1;
   int add = 0;
   while(num1>0){
        int lastdigit = num1 % 10;
        if(lastdigit % 2 != 0){
            add += lastdigit;
      }
        num1 = num1 / 10; //num /= 10
    }
    cout<<"\nSum of odd digits is: "<<add<<endl;
   
   //Print digits in reverse order using while loop
    int num2;
     cout<<"Enter a number: ";
     cin>>num2;
     while(num2>0){
        int lastdigit = num2 % 10;
        cout<<lastdigit;
        num2 = num2 / 10; //num /= 10
     }
     cout<<endl;
     

     //Reverse a given number and print the result
        int num3;
        cout<<"Enter a number: ";
        cin>>num3;
        int res = 0;
        while(num3>0){
            int lastdigit = num3 % 10;
            res = res*10 + lastdigit;
            num3 = num3 / 10; //num /= 10
        }
        cout<<"Reversed number is: "<<res<<endl;
    */



    //Do-While Loop
    // do{  
    //     //code to be executed
    // }while(condition);

    //difference between while and do-while loop
    //while loop checks the condition first then executes the code
    //do-while loop executes the code first then checks the condition

    int q = 1;
    do{
        cout<<"q is: "<<q<<endl;
        q++;
    }while(q<=5);
    cout<<endl; 

    //Difference between while and do-while loop
    int val = 1;
    do{
        cout<<"Hello Chinu! in do-while loop."<<endl;
    }while (val>=5);
    cout<<endl;
    //In do-while loop the code is executed at least once even if the condition is false
    while(val>=5){
        cout<<"Hello Chinu! in while loop."<<endl;
    }
    //In while loop the code is not executed if the condition is false
    

   return 0;
     
}