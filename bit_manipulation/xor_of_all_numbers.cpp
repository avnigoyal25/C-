#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    /*
    for(int i=1;i<=n;i++)
    {
        ans=ans^i;                    complexity-O(n)
    }
    cout<<ans<<endl;
    */

    if(n%4==0)
    {
        cout<<n<<endl;
    }
    else if(n%4==1)
    {
        cout<<"1"<<endl;
    }
    else if(n%4==2)
    {
        cout<<n+1<<endl;
    }
    else if(n%4==3)
    {
        cout<<"0"<<endl;
    }
}