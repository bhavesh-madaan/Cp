#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int sum=0;
        cin>>s;
        string a="";
        a+=s[0];
        for( int i=1;i<s.length();i++)
        {
            if(s[i]!=s[i-1])
            {
                a+=s[i];
            }
        }
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='1')
            {
                sum++;
            }
        }
        if(sum==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}