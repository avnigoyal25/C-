#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    //a-A=32
    string s="avni";
    
    //convert into uppercase
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]>='z')
        {
            s[i]-=32;
        }
    }
    cout<<"uppercase:"<<s<<endl;

    //convert into lowercase
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]>='Z')
        {
            s[i]+=32;
        }
    }
    cout<<"lowercase:"<<s<<endl;
}