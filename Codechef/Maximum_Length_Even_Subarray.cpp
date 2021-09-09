#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        ans=(n*(n+1))/2;
            if((ans%2)==0)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<n-1<<endl;
            }
        }
    return 0;
}