#include<iostream>
using namespace std;
#include<vector>

int fxn(int n){
if(n==0 || n==1){
    return 1;
}
else{
    return n*fxn(n-1);
}
}

void print(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" "; //print n first and then call the function for n-1 to print the next number in the sequence
        print(n-1);
    }
}

void printReverse(int n){
    if(n==0){
        return;
    }
    else{
        printReverse(n-1); //iska matlab pehle function call hoga aur jab n=0 hoga tab return hoga aur uske baad print hoga, isse pehle 1 print hoga phir 2 print hoga and so on until n is printed
        cout<<n<<" ";
    }
}

int sum(int n){
	if (n==0)
		return 0;
	else
		return n + sum(n-1);
};

//fibonacci series is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The function below calculates the nth Fibonacci number using recursion. Note that this implementation is not efficient for large values of n due to repeated calculations, but it serves as a simple example of recursion.
int fib(int n){
	if (n==0)
		return 0;
    else if (n==1)
        return 1;
	else
		return fib(n-1) + fib(n-2);

};

bool isSorted(int arr[], int n, int i){
	if(i==n-1)
		return true;
	if(arr[i]>arr[i+1])
		return false;
	return isSorted(arr, n, i+1);
}

int firstOccurence(vector<int>& arr, int target, int i){
    if(i==arr.size())
        return -1;
    if(arr[i]==target)
        return i;
    return firstOccurence(arr, target, i+1); 

}

int lastOccurence(vector<int>& arr, int target, int i){
    if(i==arr.size())
        return -1;
    int restArray = lastOccurence(arr, target, i+1);
    if(restArray != -1)
        return restArray;
    if(arr[i]==target)
        return i;
    return -1;
}

int pow(int x, int n){ //O(log n) time complexity
    if(n==0)
        return 1;
    int halfPower = pow(x, n/2);
    int halfPowerSq = halfPower * halfPower;
    if(n%2==0)
        return halfPowerSq;
    else
        return x * halfPowerSq;
}

int main()
{
    int n;
    cout<<"Enter the number to get factorial: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fxn(n)<<endl;
    cout<<"Numbers from "<<n<<" to 1 are: ";
    print(n);
    cout<<"\nNumbers from 1 to "<<n<<" are: ";
    printReverse(n);
    cout<<"\nSum of first "<<n<<" natural numbers is: "<<sum(n)<<endl;
    cout<<"\nFibonacci of "<<n<<" is: "<<fib(n)<<endl;
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 4, 3, 5};
    cout<<"\nIs arr1 sorted? "<<(isSorted(arr1, 5, 0) ? "Yes" : "No")<<endl;
    cout<<"Is arr2 sorted? "<<(isSorted(arr2, 5, 0) ? "Yes" : "No")<<endl;
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    int index = firstOccurence(arr, target, 0);
    if(index != -1)
        cout<<"\nFirst occurrence of "<<target<<" is at index: "<<index<<endl;
    else
        cout<<"\n"<<target<<" not found in the array."<<endl;

    cout<<"\nLast occurrence of "<<target<<" is at index: "<<lastOccurence(arr, target, 0)<<endl;
    cout<<"\n"<<target<<" raised to the power "<<n<<" is: "<<pow(2, 3)<<endl;

    return 0;
}