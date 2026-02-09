#include <iostream>
#include <cstdlib> // system("cls") ke liye
#include <fstream>  // <--- File Handling 

using namespace std;

int main() {
    // Step 1: 5 Rows aur 10 Seats ka Hall banaya (Sab 0 hain shuru mein)
    // 0 = Empty, 1 = Booked
    int seats[5][10] = {0}; 
    
    int row, col;
    int price = 0; // Total collection count karne ke liye

    while(true) {
        system("cls"); // Screen Saaf

        cout << "\n======================================\n";
        cout << "   -->  MINI MOVIE TICKET SYSTEM   <--  ";
        cout << "\n======================================\n";
        cout << "      [SCREEN IS HERE (EYES UP)]      \n";
        cout << "--------------------------------------\n\n";

        // --- STEP 2: HALL PRINT KARNA (Display Logic) ---
        for(int i = 0; i < 5; i++) {       // Rows 0 to 4
            cout << "Row " << i+1 << ": "; // Row Number dikhane ke liye
            
            for(int j = 0; j < 10; j++) {   // Seats 0 to 9
                
                // Agar 0 hai toh khali, 1 hai toh booked
                if(seats[i][j] == 0) {
                    cout << "[ ]"; // Empty Chair
                } else {
                    cout << "[X]"; // Booked Chair
                }
            }
            cout << endl; // Agli line (Next Row)
        }
        cout << "\n======================================\n";
        cout << "Total Kamayi: Rs. " << price << endl;

        // --- STEP 3: INPUT LENA ---
        cout << "\nBook karne ke liye Row aur Seat number batao.";
        cout << "\nRow (1-5): ";
        cin >> row;
        cout << "Seat (1-10): ";
        cin >> col;

        // --- STEP 4: VALIDATION (Ghalat input rokna) ---
        // Check 1: Kya Row/Seat limit ke bahar hai?
        if(row < 1 || row > 5 || col < 1 || col > 10) {
            cout << "❌ Ghalat Row ya Seat number! Sahi daalo.";
            system("pause");
            continue;
        }

        // Logic: Array 0 se start hota hai, isliye -1 kiya
        int rIndex = row - 1; 
        int cIndex = col - 1;

        // Check 2: Kya Seat pehle se booked hai?
        if(seats[rIndex][cIndex] == 1) {
            cout << "\n Sorry! Ye seat pehle se booked hai.";
            cout << "\nKoi aur try karo...";
            system("pause"); 
        } 
        else {
            // --- STEP 5: BOOKING CONFIRM ---
            seats[rIndex][cIndex] = 1; // 0 ko 1 bana diya (Booked)
            price = price + 270; // Har ticket 270 rupaye ki


            // --- 🔥 NEW ADDITION: FILE HANDLING START 🔥 ---
            ofstream myFile; // Ek file ka object banaya
            
            // "bookings.txt" file kholi. "ios::app" ka matlab hai 'Append'
            // (Matlab purana data delete mat kar, naya data niche jod de)
            myFile.open("bookings.txt", ios::app); 
            
            if(myFile.is_open()) {
                myFile << "Row: " << row << " | Seat: " << col << " | Price: 270\n";
                myFile.close(); // Kaam khatam, file band.
            }
            // --- 🔥 FILE HANDLING END 🔥 ---
            
            cout << "\n Success! Seat Book ho gayi.";
            cout << "\nEnjoy the movie! ";
            system("pause");
        }
    }

    return 0;
}