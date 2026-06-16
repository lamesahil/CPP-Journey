#include<iostream>
using namespace std;
#include<vector>

//ques 1: Write a recursive function to perform Binary Search.
int binSearch(int arr[], int si, int ei, int key){ 
    if(si>ei){ //base case: if the starting index is greater than the ending index, it means the key is not present in the array, so we return -1 to indicate that the key was not found.
        return -1;
    }
    int mid= si+(ei-si)/2; //short: we calculate the middle index of the current search range using the formula si + (ei - si) / 2. This is a common way to avoid potential overflow issues that can arise with (si + ei) / 2 when si and ei are large.
    if(arr[mid]==key){ 
        return mid; //short: if the middle element of the current search range is equal to the key we are searching for, we return the index mid, indicating that we have found the key at this index.
    }
    else if(arr[mid]>key){ //short: if the middle element is greater than the key, it means that the key must be in the left half of the current search range (if it exists), so we make a recursive call to binSearch with the ending index updated to mid - 1, effectively narrowing our search to the left half of the array.
        return binSearch(arr, si, mid-1, key);
    }
    else{ //short: if the middle element is less than the key, it means that the key must be in the right half of the current search range (if it exists), so we make a recursive call to binSearch with the starting index updated to mid + 1, effectively narrowing our search to the right half of the array.
        return binSearch(arr, mid+1, ei, key);
    }
}

//Question 2 : For a given integer array of size N. You have to find all the occurrences (indices) of a given element (Key) and print them.Use a recursive function to solve this problem

void allOccurences(int arr[], int n, int key, int i){
    if(i==n){ //base case: if the current index i is equal to n, it means we have reached the end of the array without finding any more occurrences of the key, so we return from the function.
        return;
    }
    if(arr[i]==key){ //short: if the current element at index i is equal to the key we are searching for, we print the index i, indicating that we have found an occurrence of the key at this index.
        cout<<i<<" ";
    }
    allOccurences(arr, n, key, i+1); //short: we make a recursive call to allOccurences with the next index i + 1, allowing us to continue searching for more occurrences of the key in the rest of the array.
} 

//ques 3
int countSub(string s, int i, int j, int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int res=countSub(s, i+1, j, n-1)+countSub(s, i, j-1, n-1)-countSub(s, i+1, j-1, n-2);

    if(s[i]==s[j]){
        res++;
    }
    return res;
}


//ques 4:

#define MOD 1000000007 // 10^9 + 7

// Optimized O(log n) Power Function with Modulo
long long power(long long base, long long exp) {
    // Base case
    if (exp == 0) {
        return 1;
    }
    
    // Recursive leap: calculate x^(n/2)
    long long halfPower = power(base, exp / 2);
    
    // Square it and apply modulo
    long long halfPowerSq = (halfPower * halfPower) % MOD;
    
    // If exponent is odd, multiply base one more time
    if (exp % 2 != 0) {
        return (base * halfPowerSq) % MOD;
    }
    
    return halfPowerSq;
}

int countGoodNumbers(long long n) {
    // Calculate total even and odd positions
    long long odd_positions = n / 2;
    long long even_positions = (n + 1) / 2;
    
    // Get the combinations using the power function
    long long even_combos = power(5, even_positions);
    long long odd_combos = power(4, odd_positions);
    
    // Multiply them and apply final modulo
    return (even_combos * odd_combos) % MOD;
}

//ques 

// n = number of disks
// src = Source rod
// dest = Destination rod
// helper = Helper rod
void towerOfHanoi(int n, char src, char dest, char helper) {
    // Base Case: If there's only 1 disk left, just move it directly.
    if (n == 1) {
        cout << "Shift disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    
    // Step 1: Shift top n-1 disks from Source to Helper (using Destination as temp)
    towerOfHanoi(n - 1, src, helper, dest);
    
    // Step 2: Shift the nth (largest) disk from Source to Destination
    cout << "Shift disk " << n << " from " << src << " to " << dest << endl;
    
    // Step 3: Shift the n-1 disks from Helper to Destination (using Source as temp)
    towerOfHanoi(n - 1, helper, dest, src);
}

    


int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int key1 = 5;
    cout << "Element found at index: " << binSearch(arr, 0, 6, key1) << endl;
    int arr2[9] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key2 = 2;
    cout << "Element found at indices: ";
    allOccurences(arr2, 9, key2, 0);
    cout << endl;
    string s = "abcab"; //aba, aca, bcb, aa, bb, cc, a, b, c why not bab
    cout << "Number of palindromic subsequences: " << countSub(s, 0, s.length() - 1, s.length()) << endl;
        long long n = 50;
    cout << "Number of good numbers of length " << n << ": " << countGoodNumbers(n) << endl;
    int n1 = 3; 
    towerOfHanoi(n1, 'A', 'C', 'B');
    return 0;
}