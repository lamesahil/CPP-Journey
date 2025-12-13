#include <iostream>
using namespace std;

// --- STEP 4: JEETNE KA LOGIC (Function) ---
bool checkWin(char board[3][3]) {
    // 1. Rows aur Columns check karo
    for(int i=0; i<3; i++) {
        // Row Check: Kya puri row same hai?
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]) return true;
        // Column Check: Kya pura column same hai?
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]) return true;
    }
    // 2. Diagonals (Tirchi Line) Check karo
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) return true;
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]) return true;

    return false; // Koi nahi jeeta abhi tak
}

int main() {
    char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
    char turn = 'X'; 
    int digit;
    int moves = 0;
    
    cout << "--- Tic Tac Toe ---" << endl;

    while(true) {
        // --- PRINT BOARD ---
        system("cls"); // Screen ko clear karo (Linux/Mac ke liye). Windows pe "cls" use karo
        cout << endl;
        for(int i = 0; i < 3; i++) {       
            for(int j = 0; j < 3; j++) {   
                cout << " " << board[i][j] << " ";
                if(j < 2) cout << "|";     
            }
            cout << endl;
            if(i < 2) cout << "---|---|---" << endl; 
        }

        // --- INPUT ---
        cout << endl << "Player " << turn << ", apni baari chalo (1-9): ";
        cin >> digit;

        // --- UPDATE ---
        bool validMove = false;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == digit + '0') { 
                    board[i][j] = turn;
                    validMove = true;
                    moves++;
                }
            }
        }

        if(!validMove) {
            cout << "Invalid move! Try again." << endl;
            continue; // Wapas loop ke start pe jao
        }

        // --- CHECK WINNER  ---
        if(checkWin(board)) {
            // Board ek aakhri baar dikhana chahiye taaki winning move dikhe
            cout << "\nBadhai ho! Player " << turn << " jeet gaya! :P" << endl;
            break; // Loop tod do, game khatam
        }

        // --- CHECK DRAW ---
        if(moves == 9) {
            cout << "\nGame draw ho gaya! Koi jeeta nahi." << endl;
            break; // Loop tod do, game khatam
        }

        // --- SWITCH TURN ---
        if(turn == 'X') {
            turn = 'O';
        } else {
            turn = 'X';
        }
    }

    return 0;
}