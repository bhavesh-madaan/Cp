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
        int sum=0;
        int count=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<k;i++)
        {
            a[i]=abs(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                sum=sum+a[i];
            }
        }
        if(sum<0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }      
    }
}