#include<iostream>
using namespace std;

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
Question 1 : Use the following sorting algorithms to sort an array in DESCENDING
order :
a. Bubble Sort
b. Selection Sort
c. Insertion Sort
d. Counting Sort
You can use this array as an example : [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
*/

//a. Bubble Short
void bubble(int arr[], int n){
    for(int i = 0; i<n; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
           if(arr[j]>arr[j+1]){
             swap(arr[j], arr[j+1]);
                isSwap = true;
           }    
        }
        if(!isSwap){
            break;
        }
    }
    cout<<"Sorted Array using Bubble Sort: ";
    print(arr, n);
}

//b. Selection Sort
void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j = j+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    cout<<"Sorted Array using Selection Sort: ";
    print(arr, n);
}

//c. Insertion Sort
void insertion(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    cout<<"Sorted Array using Insertion Sort: ";
    print(arr, n);
}

//d. Counting Sort
void countSort(int arr[], int n){
    int freq[10];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    cout<<"Sorted Array using Counting Sort: ";
    print(arr, n);
}
int main(){
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    print(arr, size);
    bubble(arr, size);
    selection(arr, size);
    insertion(arr, size);
    countSort(arr, size);

    return 0;
}
