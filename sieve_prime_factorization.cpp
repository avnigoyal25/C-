//20----10----5----1
//    2     2    5      -> smallest prime factor of 20 is 2 then divide by 2=10 then spf of 10 is 2 then divide is 5..till 1

#include<iostream>
using namespace std;

void prime(int n)
{
    int spf[100]={0};
    for (int i = 2; i <=n; i++)
    {
        spf[i]=i;
    }
    for (int i = 2; i <=n; i++)
    {
        if(spf[i]==i)
        {
            for (int j = i*i; j<=n; j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
            
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}
