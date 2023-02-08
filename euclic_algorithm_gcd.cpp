/* 24=2x2x2x3, 42=2x3x7 hcf=2x3=6
   42-24=18
   24-18=6
   18-6=12
   12-6=6
   6-6=0     
   hcf=6
*/
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}