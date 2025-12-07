#include<iostream>
using namespace std;

/*Question 1:  Print the number of all 7’s that are in the 2d array.
Example :
Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
Output - 2
*/
int countSevens(int arr[][3], int n, int m){
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7){
                count++;
            }
        }
    }
    return count;
}

/*Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
Example :
Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
Output - 18
*/

int sumSecondRow(int nums[][3], int m) {
    int sum = 0;
    for(int j=0; j<m;j++){
        sum += nums[1][j];
    }
    return sum;
}

/*Question 3 : Write a program to Find Transpose of a Matrix.
What is Transpose?
Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
matrix,
Matrix
a11 a12 a13
a21 a22 a23
Transposed Matrix
a11 a21
a12 a22
a13 a23*/


int main() {
    // Declare a 2D array
    int ar[2][3] = {
        {4, 7, 8},
        {8, 8, 7}
    };

    int n = 2; // number of rows
    int m = 3; // number of columns

    // Count and print the number of 7's in the array
    int result = countSevens(ar, n, m);
    cout << "Number of 7's in the array: " << result << endl;

    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}
    };

    int sum = sumSecondRow(nums, 3);
    cout << "Sum of the second row: " << sum << endl;
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpose[3][2];
    // Compute the transpose
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    // Print the transposed matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
