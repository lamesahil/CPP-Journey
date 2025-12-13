#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSUM(vector<int>& arr, int target){
    int st=0, end=arr.size()-1;
    int currSUM=0;
    vector<int> ans; //pair of indices
    while(st<end){
        currSUM = arr[st] + arr[end];
        if(currSUM == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currSUM < target){
            st++;
        }
        else{
            end--;
        }
    }
    return {-1, -1}; //pair not found
    
    
}

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



   //VECTORS
   /* Vectors are dynamic arrays provided by the C++ Standard Template Library (STL).
      They can resize themselves automatically when elements are added or removed.
      Vectors provide various built-in functions for easy manipulation, such as push_back, pop_back, size, etc.
    */
    vector<int> vec; // Declaration of vector
    vector<int> vec2 = {1, 2, 3, 4, 5}; // Initialization with values
    vector<int> vec3(5, 10); // Vector of size 5, initialized with value 10

    cout<< "Initial size of vec: " << vec.size() << endl;
    cout<< "Initial size of vec2: " << vec2.size() << endl;
    cout<< "Initial size of vec3: " << vec3.size() << endl;

    //Output elements of vec2
    for(int i=0; i<vec2.size(); i++){
        cout << vec2[i] << " ";
    }

    //Vector IMplemantation in memory
    vec2.push_back(20); // Adding element to the end
    cout<< "Size of vec2 after push_back: " << vec2.size() << endl; //6
    cout<<"Capacity of vec2: " << vec2.capacity() << endl;//10
    vec2.pop_back(); // Removing last element
    cout<< "Size of vec2 after pop_back: " << vec2.size() << endl;//5
    cout<<"Capacity of vec2: " << vec2.capacity() << endl;//10 capacity doesn't decrease after pop_back

    //2D Vector
    // vector<vector<int>> vec2D; // Declaration of 2D vector
    // vector<int> row1 = {1, 2, 3};   
    // vector<int> row2 = {4, 5, 6};
    // vec2D.push_back(row1);
    // vec2D.push_back(row2);
    // cout << "Elements of 2D vector:" << endl;
    // for(int i=0; i<vec2D.size(); i++){
    //     for(int j=0; j<vec2D[i].size(); j++){
    //         cout << vec2D[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5},
        {6}
    };
    cout << "Elements of 2D vector (matrix):" << endl;
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    //Predict the output
    vector<int> v;
    for(int i=0; i<5; i++){
        v.push_back(i); // Adding elements 0 to 4
        cout << "Size after inserting " << i << ": " << v.size() << endl;
        cout << "Capacity after inserting " << i << ": " << v.capacity() << endl;
    }

    vector<int> v1 = {1, 2, 3};
cout << v1[10];

    return 0;     





}
