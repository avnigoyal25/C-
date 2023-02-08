#include<iostream>
using namespace std;

int first(int arr[],int n, int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int rest=last(arr,n,i+1,key);
    if(rest!=-1)
    {
        return rest;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<first(arr,n,0,key)<<endl;
    cout<<last(arr,n,0,key)<<endl;
}
