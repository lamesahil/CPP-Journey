#include<iostream>
using namespace std;
int main(){
    //Dynamic Arrary
    /* Dynamic arrays are allocated on the heap memory at runtime using pointers.
       They provide flexibility in terms of size, as their size can be determined during execution.
       Memory for dynamic arrays must be manually managed using 'new' and 'delete' keywords to avoid memory leaks.
    */
   
    //STL
    /* Standard Template Library (STL) in C++ provides a dynamic array implementation called 'vector'.
       Vectors automatically manage memory, resizing themselves as elements are added or removed.
       They offer various built-in functions for easy manipulation, such as push_back, pop_back, size, etc. 
    */

    //Dynamic Memory Allocation
    /* Static Memory Allocation:
       Memory is allocated at compile-time.
       The size of the data structure must be known and fixed during compilation.
       Example: int arr[10]; // array of fixed size 10
       
       Dynamic Memory Allocation:
       Memory is allocated at runtime using pointers.
       The size of the data structure can be determined during execution.
       Example: int* arr = new int[n]; // array of size n determined at runtime
    */

    //2D Dynamic Array
    int rows, cols;
    cout << "Enter number of rows for 2D dynamic array: ";
    cin >> rows;
    cout << "Enter number of columns for 2D dynamic array: ";
    cin >> cols;
    int **matrix = new int*[rows];
    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }
    //data store
    int x=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<matrix[2][2]<<endl;
    cout<<*(*(matrix+2)+2)<<endl;
    

    // cout << "Enter elements of the 2D dynamic array:" << endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin >> matrix[i][j];
    //     }
    // }
    // cout << "2D Dynamic Array elements:" << endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i=0; i<rows; i++){
    //     delete[] matrix[i];
    // }
    // delete[] matrix;// to avoid memory leak

   // while(true) { int* i = new int; } // memory leak example


    return 0;     





}
