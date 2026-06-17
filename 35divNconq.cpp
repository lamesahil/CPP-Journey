#include<iostream>
using namespace std;
#include<vector>

void merge(int arr[], int si, int mid, int ei){
    vector<int> temp; //temporary array
    int i=si; //pointer for left half
    int j=mid+1; //pointer for right half
    //merge the two halves into temp
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    //copy the merged elements back to the original array
    for(int idx=si,k=0; idx<=ei; idx++){ //idx is the index for original array, k is the index for temp array
        arr[idx] = temp[k++]; //copying back to original array
    }
}

void mergeSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2; //to avoid overflow
    mergeSort(arr, si, mid);//left half
    mergeSort(arr, mid+1, ei);//right half
    //merge
    merge(arr, si, mid, ei);
}

int partition(int arr[], int si, int ei){
    int pivot = arr[ei]; //choosing the last element as pivot
    int i=si-1; //pointer for smaller element
    for(int j=si; j<ei; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]); //swap if element is smaller than pivot
        }
    }
    i++;
    swap(arr[i], arr[ei]); //place pivot in the correct position
    return i; //return the index of pivot
}

void quickSort(int arr[], int si, int ei){ // time complexity: O(n log n) on average, O(n^2) in worst case (when the smallest or largest element is always chosen as pivot)
    if(si>=ei){
        return;
    }
    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx-1); //left half
    quickSort(arr, pivotIdx+1, ei); //right half
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int search(int arr[], int si, int ei, int key){
    if(si>ei){
        return -1; //key not found
    }
    int mid = si+(ei-si)/2;
    if(arr[mid] == key){
        return mid; //key found at index mid
    }
    
    //l1
    if(arr[si] <= arr[mid]){ //left half
        if(arr[si] <= key && key <= arr[mid]){
            return search(arr, si, mid, key); //search in left half
        }
        else{
            return search(arr, mid+1, ei, key); //search in right half
        }
    } else {
        //l2
        if(arr[mid] <= key && key <= arr[ei]){
            return search(arr, mid+1, ei, key); //search in right half
        }
        else{
            return search(arr, si, mid, key); //search in left half
        }
    }    
}

int main(){
    int arr[7] = {6, 7, 3, 4, 1, 2, 5};
    int n = 7;
   // mergeSort(arr, 0, n-1);
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    printArray(arr, n);
    int arr1[7] = {4, 5, 6, 7, 0, 1, 2}; //rotated sorted array
    int key = 0;
     for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout << "Index of " << key << " is: " << search(arr1, 0, n-1, key) << endl;


    return 0;
}