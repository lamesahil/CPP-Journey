#include<iostream>
using namespace std;
#include<vector>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    vec.push_back(7);
    vec.pop_back();
    for (int i = vec.size() - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }

    /*
    &-> address of operator
    *-> dereference operator
    .-> member access operator
    ->-> member access operator for pointer to object
    []-> subscript operator
    ()-> function call operator
    ::-> scope resolution operator
    */
    return 0;
}