#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = INT_MIN, secondMax = INT_MIN, min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if(a[i] > secondMax && a[i] != max)
        {
            secondMax = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "The max no is: " << max << endl;
    cout << "The second max is: " << secondMax << endl;
    cout << "The min no is: " << min << endl;
    cout << sizeof(a);
    return 0;
}
