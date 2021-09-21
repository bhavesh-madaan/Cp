#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                count++;
            }
        }
        if(k>count)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if((k%2)==0)
            {
                for(int i=n-1;i>0;i--)
                {
                    if(s[0]==s[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            else
            {
                for(int i=n-1;i>0;i--)
                {
                    if(s[0]!=s[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }

    }
}