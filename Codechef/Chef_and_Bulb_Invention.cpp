#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        int ex,rem,mul,ans;
        cin>>a>>b>>c;
        ex=b%c;
        rem=a%c;
        mul=a/c;
        ans=mul*ex;
        if(ex>rem)
        ans=ans+rem;
        else
        ans=ans+ex;
        ans++;
        ans=ans+(b/c);
        cout<<ans<<endl;
    }
}