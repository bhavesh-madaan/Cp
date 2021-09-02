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
        int node=n;
        int a[n-1];
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        int w[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }
        for(int i=n-1;i>=1;i--)
        {
            if((a[i]-a[0])==w[i]-w[0])
            {
                continue;
            }
            else
            {
                node--;
            }
        }
        cout<<node<<endl;
    }
}