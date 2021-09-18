#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int a[s];
        int sum=0;
        int count=0;
        vector<int> x;
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
        if(s>2)
        {
            for(int i=0;i<s;i++)
            {
                if((a[i]%2)==0)
                {
                    count++;
                }
            }
            if((count==s) || (count==0))
            {
                cout<<"-1"<<endl;
            }
            else
            {
                for(int i=0;i<s;i++)
                {
                    if((a[i]%2)==0)
                    x.push_back(a[i]);
                }
                for(int i=0;i<s;i++)
                {
                    if((a[i]%2)!=0)
                    x.push_back(a[i]);
                }
                for(int i=0;i<s;i++)
                {
                    cout<<x[i]<<" ";    
                }
                cout<<endl;
            }
        }
        else if(s==2)
        {
            sum=abs(a[0]-a[1]);
            if(sum%2==0)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<a[0]<<" "<<a[1]<<endl;
            }
        }
}
}