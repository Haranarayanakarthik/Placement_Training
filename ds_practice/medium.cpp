// Medium 1. Reverse an Array Using Pointers
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int *start = a, *end = a + n - 1;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++; end--;
    }
    for(int i=0; i<n; i++) cout << a[i] << " ";
    delete[] a;
    return 0;
}
