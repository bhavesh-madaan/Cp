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
        int a[n];
        int b[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<(n-1);i++)
        {
            cin>>b[i];
        }
        sort(a,a+n, greater<int>());
        sort(b,b+n-1, greater<int>());
        int x,y,z,w;
        if(n>=3)
        {
           // cout<<'o';
            x=(b[0]-a[0]);
            y=(b[1]-a[1]);
            z=(b[1]-a[2]);
            w=(b[0]-a[1]);
            if(x==y&&x>0)
            {
                cout<<x<<endl;
            }
            else if((x==z)&&x>0)
            {
                cout<<z<<endl;
            }
            else if((w==z)&&z>0)
            {
                cout<<z<<endl;
            }
            else
            {
                cout<<"error";
            }
        }
        else
        {
           // cout<<'o';
            x=(b[0]-a[0]);
            y=(b[0]-a[1]);
            if((x>0))
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<y<<endl;
            }
            }
    }
return 0;
}