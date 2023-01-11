#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the sum"<<endl;
    cin>>s;
    int i=0,j=0,st=-1,end=-1,sum=0;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<end<<endl;
}