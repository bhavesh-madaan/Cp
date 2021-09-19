#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m;
        int x[3];
        cin>>a>>b>>c>>m;
        x[0]=a;
        x[1]=b;
        x[2]=c;
        sort(x,x+3);
        if (((x[2]-(x[1]+x[0]+1))<=m) && (m<=(a+b+c-3)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
        cout<<"NO"<<endl;
        }
    }
}