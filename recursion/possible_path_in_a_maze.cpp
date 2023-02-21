/*there are n number of rows and columns, we can only move in horizontal or vertical direction.
start=(0,0) end=(n-1,n-1)*/

#include<iostream>
using namespace std;

int path(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)              //path not possible
    {
        return 0;
    }
    return path(n,i+1,j)+path(n,i,j+1);
}
int main()
{
    cout<<path(3,0,0)<<endl;
}