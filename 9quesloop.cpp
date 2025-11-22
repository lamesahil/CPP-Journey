#include<iostream>
using namespace std;
int main(){
    //Print 0-1 Triangle Pattern
    int n;
    bool val = true;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<val<<" ";
            val = !val;//toggle between 0 and 1
        }
        cout<<"\n"; //Last * and endl should be outside the inner loop
        
    }
    //Print the rhombus pattern
    for(int i=1; i<n; i++){
        for(int k=0; k<=n-i-1; k++){
            cout<<" ";
        }
        for(int j=0; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl; //Last * and endl should be outside the inner loop
    }
    //
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=2; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl; //Last * and endl should be outside the inner loop
    }
    for(int i=5; i>=1; i--){
	cout<<i;
    cout<<endl;
    }


    return 0;

}