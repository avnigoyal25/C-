//given a range from l-r print the xor(l^l-1^l-2^l-3......r-1^r)

#include<iostream>
using namespace std;

int calculate(int n)
{
    int ans=0;
    if(n%4==0)
    {
        ans=n;
    }
    else if(n%4==1)
    {
        ans=1;
    }
    else if(n%4==2)
    {
        ans=n+1;
    }
    else if(n%4==3)
    {
        ans=0;
    }
    return ans;
}
int main()
{
    int l,r;
    cin>>l>>r;
    cout<<(calculate(r)^calculate(l-1))<<endl;
}