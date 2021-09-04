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
        int ar[n-1];
        int a=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            a=max(ar[i],a);
        }
        ;
        if(ar[0]!=a)
        {
            cout<<"-1"<<'\n';
            continue;
        }
        int mx=ar[n-1];
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]>mx)
            {
                mx=ar[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}