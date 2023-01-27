#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<(1<<n);i++)        //1<<n=2^n-1
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}