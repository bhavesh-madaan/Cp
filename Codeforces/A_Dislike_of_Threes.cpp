#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,k;
        cin>>k;
        vector<int> v1;
        for(i=1;i<=1666;i++)
        {

            if((i%3==0) || (i%10==3))
            {
                continue;
            }
            else
            {
                v1.push_back(i);
            }
        }
        cout<<v1[k-1]<<endl;
    }
    return 0;
}