#include<iostream>
using namespace std;
//2D Array Example in C++

//Spiral Matrix
void printSpiral(int arr[][4], int n, int m) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}


int main() {
    // Declare a 2D array
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Print the 2D array
    /*
    cout << "2D Array elements:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int arr2[3][4];
    int n = 3, m = 4;
    // Input elements into the 2D array
    cout << "Enter elements for a 3x4 2D array:" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr2[i][j];
        }
    }
    // Print the inputted 2D array
    cout << "You entered the following 2D array:" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << "Spiral order of the 2D array:" << endl;
    printSpiral(arr, 4, 4);

    return 0;
}