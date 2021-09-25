#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
   {
        long long a,b;
        long long count=0;
        cin>>a>>b;
        long long c;
        c=abs(b-a);
        count=c/3;
        if(b%3==0 || a%3==0)
        {
            count=count+1;
        }
        cout<<count<<endl;

    }
}