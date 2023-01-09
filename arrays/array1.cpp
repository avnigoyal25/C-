//given an array a[] of size n, for every i from 0 to n-1 print output max(a[0],a[1],...a[i]).
#include<iostream>
using namespace std;

int main()
{
    int mx=INT_MIN;
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
}
