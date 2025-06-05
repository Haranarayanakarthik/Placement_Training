#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=&n;
    cout<<*p<<endl;
    cout<<&p;
    return 0;
}