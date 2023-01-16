#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int curLen=0,maxLen=0,st=0,maxst=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(curLen>maxLen)
            {
                maxLen=curLen;
                maxst=st;
            }
            curLen=0;
            st=i+1;
        }
        else{
            curLen++;
        }
        if(a[i]=='\0')
        {
            break;
        }
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++)
    {
        cout<<a[i+maxst];
    }
}