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
        string s;
        string t;
        cin>>s>>t;
        int sa=0,ta=0,fa=0,y;
       
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                sa=sa+1;
            }
            if(t[i]=='1')
            {
                ta=ta+1;
            }
        }
        fa=min(sa,ta);
        y=min(fa,n/2);
        cout<<y<<endl;

    }
    return 0;
}