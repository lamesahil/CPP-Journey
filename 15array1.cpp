#include<iostream>
using namespace std;

//Linear Search
int LinearArr(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<i;
        }
    }
    return -1;
}

void printArr(int *array1, int s){
    for(int i=0; i<s; i++){
        cout<<array1[i]<<", ";
    }
    cout<<endl;
}

//Binary Search
int binarySearch(int *arr, int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}





// void ptrArr(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         cout<<*ptr<<" "; //cout<<(*ptr+i)<<" ";
//         ptr=ptr+1; 
//     }
//     cout<<endl;
// }

int main(){
    //Array 
    /*
    int n;
    cout<<"Enter Size Of Array: ";
    cin>>n;
    int marks[n];
    cout<<"Enter Marks of Array: ";
    for(int i = 0; i<n; i++){
        cin>>marks[i];
    }
    for(int i = 0; i<n; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
 
    //Finnd largest in array

    int arr[]={5,6,9,12,19};
    int a = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<a; i++){
        if(arr[i]>max){
            max = arr[i];
           // cout<<"assigning val "<<arr[i]<<"to max\n";
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
        
    cout<<"max= "<<max<<endl;
    cout<<"min= "<<min<<endl;
    cout<<arr<<endl;//adress
    
    int arr[] = {9, 8, 6, 0, 15};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
    int arr[]={5,6,9,12,19};
    int n = sizeof(arr)/sizeof(int);
    LinearArr(arr, n, 19);
    
   //Reverse an ARRAY
   //with extra space
   int array1[] = {5, 4, 3, 9, 2};
   int s = sizeof(array1)/sizeof(int);
   int copyarr[s];
   for(int i=0; i<s; i++){
    int j = s-i-1;
    copyarr[i] = array1[j];
   }
   for(int i=0; i<s; i++){
    array1[i] = copyarr[i];
   }
   printArr(array1, s);


   //without extra space 2 pointer approach
   int array1[] = {5, 4, 3, 9, 2};
   int s = sizeof(array1)/sizeof(int);
   int start = 0;
   int end = s-1;
   while(start>end){
    int temp = array1[start];
    array1[start] = array1[end];//swapping
    array1[end] = temp;//swap(array1[start], array1[end])  <-----alternative way
    start++;
    end--;
   }
   printArr(array1, s);
*/
   int array1[] = {2,4,6,8,9,11,15,19};
   int s = sizeof(array1)/sizeof(int);
   cout<<binarySearch(array1, s, 11);
   cout<<endl;


//    int *p = array1;
//     cout<<*(p++)<<endl; //2
//     cout<<*p<<endl;     //4
//     cout<<*(++p)<<endl; //6
//     cout<<*p<<endl;     //6

    //Pointer Arithmetic
    //1. Increment and Decrement
   /* int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    ptr++; // increments by sizeof(datatype) i.e. 4 bytes for int or (++ptr)
    cout<<ptr<<endl;
    ptr--; // decrements by sizeof(datatype) i.e. 4 bytes for int or (--ptr)
    cout<<ptr<<endl;
    
    //2. Addition and Subtraction
    ptr = ptr + 3; // moves the pointer by 3 times the size of datatype
    cout<<ptr<<endl;//3 times 4 bytes
    ptr = ptr - 3; // moves the pointer back by 3 times the size of datatype
    cout<<ptr<<endl;//3 times 4 bytes
    ptrArr(array1, s);
    */
    //Addition and subtraction of two pointers
    //both pointers should point to same array 
    //for subtraction both should be of same datatype
    //addition of two pointers is not allowed in C++ 
    int m = 5;
    int *ptr1 = &m;
    int *ptr2 = ptr1 + 3;
    cout<<"Addition of two pointers is not allowed in C++"<<endl;
    cout<<"Address stored in ptr2: "<<ptr2<<endl;
    cout<<"Address stored in ptr1: "<<ptr1<<endl;
    cout<<"Subtraction of two pointers: "<<ptr2 - ptr1<<endl;
    int *ptr3 = array1;//2
    int *ptr4 = array1 + 6;//15
    cout<<"Value stored in ptr4: "<<*ptr4<<endl;
    cout<<"Value stored in ptr3: "<<*ptr3<<endl;
    cout<<"Subtraction of two pointers: "<<ptr4 - ptr3<<endl;

    //4. Comparison
    cout<<(ptr1==ptr2)<<endl; //0
    cout<<(ptr1!=ptr2)<<endl; //1
    cout<<(ptr1<ptr2)<<endl;  //1
    cout<<(ptr1>ptr2)<<endl;  //0



   return 0;

}