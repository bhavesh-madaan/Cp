#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size,qual,min,total;
        cin>>size>>qual>>min;
        int n=size-1;
        int m=min-1;
        int i,q;
        int x[m];
        int a[n],b[n];
        for(i=0;i<size;i++)
        {
            cin>>a[i];
            b[i]=i+1;
        } 
        for(i=0;i<size;i++)
        {
            if(a[i]>=qual)
            {
                total=total+1;
            }
        }
        if(total>min)
        {
            cout<<total<<endl;
            for(i=0;i<size;i++)
            {
                if(a[i]>=qual)
                cout<<i+1<<endl;
            }
        }
        else
        {
            cout<<min<<endl;
            for(i=0;i<=n;i++)
            {
                if(a[i]<qual)
                {
                    x[i]=i+1;
                    q=q+1;
                }
            }
            for(i=0;i<=n;i++)
            {

        }
        
    }
}
}
