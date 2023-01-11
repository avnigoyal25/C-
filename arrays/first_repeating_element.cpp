#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int index[N];
    for(int i=0;i<N;i++)
    {
        index[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(index[a[i]]!=-1)
        {
            minidx=min(minidx,index[a[i]]);
        }
        else
        {
            index[a[i]]=i;
        }
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    }
}