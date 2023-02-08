#include<iostream>
using namespace std;

int ans(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*ans(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<ans(n,p)<<endl;
}