#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,ans;
        cin>>n>>a;
        for(int i=1;i<=n;i++)
        if(n<(i*i))
        {
            ans=a*(i-1);
            break;
        }
        else 
        {
            ans=a;
        }
        cout<<ans<<endl;
    }
}