#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abcdfajh";
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]>maxf)
        {
            maxf=count[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;
}