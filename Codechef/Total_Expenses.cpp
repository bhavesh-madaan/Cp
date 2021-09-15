#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q,i;
        cin>>q>>i;
        double ans;
        if(q>=1000)
        {
            ans=(q*i*0.9);
            cout << fixed<< setprecision (6) << ans<<endl;
        }
        else
        {
            ans=q*i;
            cout << fixed<< setprecision (6) << ans<<endl;
        }
    }
}