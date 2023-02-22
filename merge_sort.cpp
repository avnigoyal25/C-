#include <iostream>
using namespace std;


void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    //temporary arrays
    int a1[n1];
    int a2[n2];    

    for(int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    } 
    for(int i=0;i<n2;i++)
    {
        a2[i]=a[mid+1+i];
    }  
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            a[k++]=a1[i++];
        }
        else{
            a[k++]=a2[j++];
        }
    } 
    while(i<n1)
    {
        a[k++]=a1[i++];
    }
    while(j<n2)
    {
        a[k++]=a2[j++];
    }

}
void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


//Time complexity- O(nlogn)