#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            end=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;
}