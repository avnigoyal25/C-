/*condition:
1) integers in each row are sorted in ascending from left to right.
2) integers in each column are sorted in ascending from top to bottom.
*/

#include<iostream>
using namespace std;

int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool ans= false;
    while(r<n & c>=0)
    {
        if(a[r][c]==target)
        {
            ans=true;
        }
        if(a[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if(ans)
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}