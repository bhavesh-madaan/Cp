#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<char> s2;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"()";
            }
            for(int j=i;j<n;j++)
            {
                cout<<"(";
            }
            for(int j=i;j<n;j++)
            {
                cout<<")";
            }
            cout<<endl;
        }
    }
}
