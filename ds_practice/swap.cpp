#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"The nos before swapping are : "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    int *p1=&x;
    int *p2=&y;

    int t=*p1;
    *p1=*p2;
    *p2=t;
     
    cout<<"The nos after swapping are : "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}