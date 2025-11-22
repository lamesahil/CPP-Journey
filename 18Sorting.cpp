
//Bubble Sort
//-->compare adjacent elements and swap if they are in wrong order
//-->optimized version with a flag to detect if any swap happened

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         bool isSwap = false; // Flag to detect any swap
//         cout<<"outside loop iteration "<<i<<endl;
//         for (int j = 0; j < size - i - 1; j++) {
//             cout<<"  inside loop iteration "<<j<<endl;
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 // int temp = arr[j];
//                 // arr[j] = arr[j + 1];
//                 // arr[j + 1] = temp;
//                 swap(arr[j], arr[j + 1]); // Using STL swap for clarity
//                 isSwap = true;
//             }
//         }
//         if (!isSwap) {
//             break; // No swaps means the array is already sorted
//         }
//     }
//     printArray(arr, size);
// }
// int main() {
//     //int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int arr1[5] = {1, 2, 3, 4, 5};
//     //int size = sizeof(arr) / sizeof(arr[0]);
//     // cout << "Original array: ";
//     // printArray(arr, size);
//     // cout << "Sorted array: ";
//     // bubbleSort(arr, size);
//     // cout << "Original array 1: ";
//     // printArray(arr1, size); 
//     cout << "Sorted array 1: ";
//     bubbleSort(arr1, 5);
//     cout << endl;
    
//     return 0;
// }

//Selection Sort
//-->pick the smallest element and swap it with the first unsorted element

// #include<iostream>
// using namespace std;

// void selectionSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         int minIndex = i; // Assume the minimum is the first element
//         for (int j = i + 1; j < size; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j; // Update minIndex if a smaller element is found
//             }
//         }
//         // Swap the found minimum element with the first element
//         swap(arr[i], arr[minIndex]);
//     }
// }
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     selectionSort(arr, size);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//Insertion Sort
//-->build sorted array one element at a time by inserting elements into their correct position
//-->efficient for small data sets or nearly sorted data
//-->cards sorting analogy
/*
#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int prev = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    insertionSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}




//Counting Sort
//-->non-comparison based sorting algorithm
//-->efficient for sorting integers within a small range
//-->counts occurrences of each unique element
#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n){
    int freq[10000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    //1st step initialize frequency array
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    //2nd step modify original array
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArray(arr, n);
}
int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);
    cout << "Sorted array: ";
    countSort(arr, size);
    

    return 0;
}
    

//inbuilt Sort Function
    
#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr+2, arr+5);// STL sort from index 2 to 4 in ascending order
    printArray(arr, 8);
    sort(arr, arr+8); // STL sort in ascending order
    printArray(arr, 8);
    sort(arr, arr+8, greater<int>()); // STL sort in descending order
    printArray(arr, 8);
    return 0;
}
*/
#include <iostream>
using namespace std;
//Q Sort this array using insertion sort algorithm in descending order
// char ch[] = {'f', 'b', 'a','e', 'c','d'}
int main(){
    char ch[] = {'f', 'b', 'a','e', 'c','d'};
    int size = sizeof(ch)/sizeof(ch[0]);
    //insertion sort in descending order
    for(int i = 1; i<size; i++){
        int curr = ch[i];
        int prev = i-1;
        while(prev>=0 && ch[prev]<curr){
            swap(ch[prev], ch[prev+1]);
            prev--;
        }
        ch[prev + 1] = curr;
    }
    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    return 0;
}    