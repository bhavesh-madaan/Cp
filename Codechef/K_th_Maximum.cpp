#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,b=0;
        int count=0;
        cin>>n>>k;
        int a[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==(*max_element(a,a+n)) && k<=i+1)
            {
                count=count+n-i;
            }
        }

        cout<<count<<endl;
    }
}