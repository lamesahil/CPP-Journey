#include<iostream>
using namespace std;

//Function to print all subarrays of an array
/*void printSubarrays(int arr[], int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            //cout<<"("<<start<<","<<end<<") ";
            for(int k=start;k<=end;k++){
                cout<<arr[k];
            }
            cout<<", ";
    }
    cout<<endl;
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printSubarrays(arr,n);
    return 0;
}

//Maximum subarray sum (Brute force approach) O(n^3)
//int_min=-infinity int_max=+infinity -->pre define macros in C++
//We can initialize maxSum with 0 if all elements are positive
//If all elements are negative, we can initialize maxSum with int_min
int maxSum =INT_MIN;
int maxSubarraySum(int arr[], int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int k=start;k<=end;k++){
                currSum+=arr[k];
            }
            cout<<currSum<<", ";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    return maxSum;
}
//Optimied approach O(n^2)
int maxSubarraySum2(int arr[], int n){
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    return maxSum;
}
//Kadane's Algorithm O(n) (Dynamic Programming)

int maxSubarraySum3(int arr[], int n){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0) currSum=0;
    }
    return maxSum;
}
int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    cout<<"Maximum Subarray Sum is: "<<maxSubarraySum3(arr,n);
    return 0;
}

//Best time to buy and sell stock
//o(n)+o(n)=o(2n)=o(n) time complexity {since we are using two loops one after another}
int maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] =INT_MAX;
    //cout<<bestBuy[0]<<", ";
    for(int i=1;i<n;i++){
        bestBuy [i]=min(bestBuy[i-1],prices[i-1]);
        //cout<<bestBuy[i]<<", ";
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int profit=prices[i]-bestBuy[i];
        maxProfit=max(maxProfit,profit);
    } 
    return maxProfit;
}
int main(){
    int prices[6]={7,1,5,3,6,4};
    int n=6;
    cout<<"Maximum Profit is: "<<maxProfit(prices,n);
    return 0;
}
*/

//Trapping Rainwater
//O(n)
int trap(int *height, int n){
    int leftmax[20000];
    int rightmax[100000];
    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        //cout<<leftmax[i]<<", ";
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
        //cout<<rightmax[i]<<", ";
    }
    int waterTrapped = 0;
    for(int i=1;i<n;i++){
        int currentWater = min(leftmax[i], rightmax[i])-height[i];
        if(currentWater>0){
            waterTrapped+=currentWater;
        }
    }
    cout<<"Water Trapped: "<<waterTrapped;

    return waterTrapped;
}
int main(){
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height)/sizeof(int);
    trap(height, n);
    return 0;
}
