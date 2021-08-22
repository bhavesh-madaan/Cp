#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f,g;
        cin>>a>>b>>c;
        d=abs(a-b);
        e=d*2;
        f=c+d;
        g=abs(c-d);
        if((e>=c) && (e>=b) && (e>=a))
        {
            if(f<=e)
            {
                cout<<f;
            }
            else if(g>0)
            {
                cout<<g;
            }
            else
            {
                cout<<-1;
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;
    }
}