#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e,i,n;
        cin >>a;
        cin >>b;
        cin >>c;
        cin >>n;
        for(i=0;i<n-3;i++)
        {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        }
    cout<<d<<endl;
    }
	return 0;
}