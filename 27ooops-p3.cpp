#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student() {
        cout << "Access Granted: Student logged in." << endl;
    }

    // Destructor (Ye hai safai karamchari)
    ~Student() {
        cout << "Session Expired: Memory Cleared." << endl;
    }
};


/*Challenge: Ek class likh ATM.
Usme balance variable ko private rakh.
Ek public function bana checkBalance() jo balance print kare.
Main function se balance ko directly change karne ki koshish kar (Error aana chahiye).
Try kar. Ye security ka pehla step hai. 👊*/


class ATM {
    private:
        double balance;

    public:
        ATM() {
            balance = 1000.0;
        }

        void checkBalance() {
            cout << "Current Balance: $" << balance << endl;
        }

        // --- TERA TASK ---
        // Yahan ek function likh 'deposit(double amount)'
        // Jo check kare agar amount > 0 hai, toh balance mein add kar de.
        // Agar nahi, toh print kare "Invalid Amount!"
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposit Successful. New Balance: $" << balance << endl;
            } else {
                cout << "Invalid Amount!" << endl;
            }
        }
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdrawal Successful. New Balance: $" << balance << endl;
            } else {
                cout << "Invalid Amount or Insufficient Balance!" << endl;
            }
        }
};

int main() {
    cout << "--- Main Function Start ---" << endl;
    Student s1; // Constructor chalega
    cout << "Student is studying..." << endl;
    // Yahan main function khatam hoga, toh Destructor automatic chalega
    cout << "--- Main Function End ---" << endl;
    ATM myAccount;
    myAccount.checkBalance(); // Output: 1000
   // myAccount.balance = 500000; // Error: 'balance' is a private member of 'ATM'
    myAccount.deposit(500); // Valid deposit
   // myAccount.deposit(-100); // Invalid deposit
    myAccount.withdraw(200); // Valid withdrawal
    //myAccount.withdraw(2000); // Invalid withdrawal
    return 0;
}