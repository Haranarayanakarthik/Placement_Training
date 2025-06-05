// Difficult 1. Implement a Function that Returns a Pointer to the Largest Element in an Array
#include <iostream>
using namespace std;
int* largestElement(int *arr, int n) {
    int *max = arr;
    for(int i=1; i<n; i++) {
        if(arr[i] > *max) max = &arr[i];
    }
    return max;
}
int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int *largest = largestElement(arr, n);
    cout << *largest;
    delete[] arr;
    return 0;
}
