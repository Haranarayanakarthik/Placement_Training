#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int *p=&a[i];
        sum = sum+*p;
    }
    cout<<sum;
    return 0;
}