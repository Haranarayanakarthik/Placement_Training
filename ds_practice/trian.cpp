#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the matrix : ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                sum = sum+a[i][j];
            }
            if(i>=j)
            {
                sum1 = sum1+a[i][j];
            }
        }
    }
    cout<<sum<<endl;
    cout<<sum1;
    return 0;
}