#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,q;
        bool b=true;
        cin>>n>>m>>q;
        char c[n];
        long long ele[n];
        for(long long i=0;i<q;i++)
        {
            cin>>c[i]>>ele[i];
        }  
        long long a[n]={0};
        long long count=0;
        for(long long i=0;i<q;i++)
        {
            if(c[i]=='+')
            {
                a[ele[i]-1]++;
                count++;
            }
            else if(c[i]=='-')
            {
                a[ele[i]-1]--;
                count--;
            }
            if((count>m) || ((a[ele[i]-1])<0))
            {
                b=false;
                break;
            }
            
        }
        if(b)
        {
            cout<<"Consistent"<<endl;
        }
        else
        {
            cout<<"Inconsistent"<<endl;
        }
    }
    return 0;
}