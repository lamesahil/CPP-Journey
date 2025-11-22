#include<iostream>
using namespace std;
int main() {
 int n = 0;
 while (1) {  // Infinite loop; use 'break' to exit
    cout<<"\nEnter the number: ";
    cin>>n;
    if (n < 0) {
        break;  // Exit the loop if the number is negative
    }
    if (n > 10) {
        printf("Skip the value\n");
        continue; // Skip the current iteration if the number is greater than 10
    }
    printf("The number is: %d\n", n);
    }
    printf("Exited the loop.\n");
    return 0;
}

