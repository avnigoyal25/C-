#include<iostream>
using namespace std;

int setBit(int n,int pos)
{
    return((n &(1<<pos))!=0);
}
void unique(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum^arr[i];
    }
    int temp=sum;
    int set=0,pos=0;
    while(set!=1)
    {
        set=sum & 1;
        pos++;
        sum=sum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(temp^newxor)<<endl;
}

int main()
{
    int arr[]={1,2,3,1,2,3,5,7};
    unique(arr,8);
}