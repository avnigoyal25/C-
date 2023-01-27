//(n,i)=check if the ith bit is set or not

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;
    int mask=(1<<i);
    bool set=mask & n;
    if(set)
    {
        cout<<"set";
    }
    else
    {
        cout<<"no";
    }
}