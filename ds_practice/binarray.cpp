#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : " <<endl;
    cin>>n;
    cout<<"Enter the binary numbers into the array only : ";
    int a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0 || x==1)
        {
            a[i]=x;
            i++;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
    int zsum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zsum++;
        }
    }
    for(int i=0 ;i<zsum;i++)
    {
        a[i] = 0;
    }
    for(int i=zsum;i<n;i++)
    {
        a[i] = 1;
    }
    for(int i=0;i<n;i++)
    {
        cout << " " <<a[i];
    }
    return 0;
}