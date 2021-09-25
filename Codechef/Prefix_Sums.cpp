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
        int a=n/2;
        int c[a],d[a];
        int count=1;
        if(a%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<a/2;i++)
            {
                c[i]=i+1;
            }
            for(int i=0;i<a/2;i++)
            {
                c[(a/2)+i]=n-i;
            }
            for(int i=0;i<a/2;i++)
            {
                d[i]=a-i;
            }
            for(int i=a/2;i<a;i++)
            {
                d[i]=a+count;
                count++;
            }
            cout<<"YES"<<endl;
            for(int i=0;i<a;i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<a;i++)
            {
                cout<<d[i]<<" ";
            }
            cout<<endl;

        }
    }
}