#include<iostream>
using namespace std;
int main(){
    //Nested Loop
    //Loop inside another loop
    int n;
    cout<<"Enter a number: ";   
    cin>>n;
    for(int i=1; i<=n; i++){ //no. of rows
        for(int j=1; j<=n; j++){//no. of columns
            cout<<i<<" ";
        }
        cout<<endl;
    }
    //Print Star pattern
    for(int q=1; q<=n; q++){ //no. of rows
        for(int r=1; r<=q; r++){//no. of columns
            cout<<"* ";
        }
        cout<<endl;
    }
    //Print Reverse Star pattern
for(int e=1; e<=n; e++){ //no. of rows
        for(int w=n; w>=e; w--){//no. of columns. also w=n-e+1; w>=1; w--
            cout<<"* ";
        }
        cout<<endl;
    }
    //Print Half Pyramid
    for(int a=1; a<=n; a++){ //no. of rows
        for(int s=1; s<=a; s++){//no. of columns
            cout<<s<<" "; //a will print row number
        }
        cout<<endl;  
    }
    //Print Character Pyramid Pattern
    char ch = 'A';
    for(int x=1; x<=n; x++){ //no. of rows
        for(int y=1; y<=x; y++){//no. of columns
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    //Hollow Rectangle Pattern
    for(int m=1; m<=n; m++){ //no. of rows
        cout<<"* ";
        for(int l=1; l<=n-1; l++){
            if(m==1 || m==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"*";
        cout<<endl; //Last * and endl should be outside the inner loop
    }
    //Inverted and Rotated Half Pyramid
    for(int p=1; p<=n; p++){ //no. of rows
        for(int o=1; o<=n-p; o++){//spaces
            cout<<"  ";
        }
        for(int k=1; k<=p; k++){//no. of columns
            cout<<"* ";
        }
        cout<<endl;
    }
    //Floyd's Triangle
    int number = 1;
    for(int c=1; c<=n; c++){ //no. of rows
        for(int v=1; v<=c; v++){ //no. of columns
            cout<<number<<" "; //print number
            number++; //increment number
        }
        cout<<endl; //Last * and endl should be outside the inner loop
    }
    //Star Pyramid Pattern
    for(int f=1; f<=n; f++){
        for(int d=1; d<=n-f; d++){
            cout<<" ";
        }
        for(int g=1; g<=2*f-1; g++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Inverted Star Pyramid Pattern
    for(int x=n; x>=1; x--){
        for(int y=1; y<=n-x; y++){
            cout<<" ";
        }
        for(int z=1; z<=2*x-1; z++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Diamond Pattern upar hai
    //Butterfly Pattern
    for(int i=1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int k=1; k<=2*(n-i); k++){
            cout<<" ";
        }
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=n; i>=1; i--){
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int k=1; k<=2*(n-i); k++){
            cout<<" ";
        }
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }





    return 0;

}