// Medium 3. Dynamic Memory Allocation for Array Using Pointers
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cin >> n;
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    free(arr);
    return 0;
}
