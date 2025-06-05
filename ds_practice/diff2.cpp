// Difficult 2. Create and Manipulate a 2D Array Using Double Pointers
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int **arr = new int*[r];
    for(int i=0; i<r; i++) arr[i] = new int[c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> arr[i][j];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) cout << arr[i][j] << " ";
        cout << "\n";
    }
    for(int i=0; i<r; i++) delete[] arr[i];
    delete[] arr;
    return 0;
}
