#include<iostream>
using namespace std;
void multipleBy2(int &a,int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int main(){
    /*
    //when you declare
    // int jai_shree_ram; 
    // //it automatically get converted to float
   
    //Q1). What will pttr2 point in follwowing code?
    int x = 5, y=10;
    int *ptr1 = &x, *ptr2 =&y;
    ptr2 = ptr1;
    cout<<ptr2<<endl; //5
    cout<<ptr1<<endl; //5
    cout<<&x<<endl; //5

   //Q2) What is the type of a & b;
   float* a, b; //a is pointer to float, b is float 
   cout<<sizeof(a)<<endl; //8 bytes
   cout<<sizeof(b)<<endl; //4 bytes

   //Q3) Can we initialize a pointer with value 0?
    int *p = 0; //yes
    cout<<p<<endl; //0
    //cout<<*p<<endl; //segmentation fault
*/
//EXERCISE
/*
//Q1)What will be output of the following code?
    int i;
    int *ptr1;
    i = 7;
    ptr1 = &i;
    cout<<*ptr1<<endl; //7

//Q2)What will be output of the following code?
    int x =1, y=2, z=3;
    multipleBy2(x,y,z);
    cout<<x<<y<<z<<endl; //2 4 6
//Q3)What will be output of the following code?
    int a = 32;
    int *ptr = &a;
    char ch = 'A';
    char &cho = ch;
    cho += a;
    *ptr += ch;
    cout<<a<<","<<ch<<endl; 
*/

    //Leap Year
    
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<year<<" Is Leap year";
    }else{
        cout<<year<<" Is Not a Leap year";
    }

    return 0;
}