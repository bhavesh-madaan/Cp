#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
        int b,c;
        cin>>a0>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9;
        b=a0+a2+a4+a6+a8;
        c=a1+a3+a5+a7+a9;
        if(b==c)
        {
            cout<<"0";
        }
        else if (b>c)
        {
            cout<<"1";
        }
        else
        {
            cout<<"2";
        }
        cout<<endl;
    }
    }
