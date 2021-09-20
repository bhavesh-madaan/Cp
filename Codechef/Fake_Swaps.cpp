#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        cin>>s1;
        int count=0;
        int ans=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s1[i])
            {
                l++;
            }
            if(s1[i]!='1')
            {
                count++;
            }
            else
            {
                ans++;
            }
        }

        if(((count)>=1) && ((ans)>=1))
        {
            cout<<"YES"<<endl;
        }
        else if(n==l)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}