#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s;
        cin>>n>>s;
        long long sum=0;
        long long a=n+1;
        sum=(n*a)/2;
        long long b;
        b=sum-s;
        if((b<=n) && (b>0))
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}