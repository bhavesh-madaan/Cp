#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
       vector <string> s;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           string a;
           cin>>a;
           s.push_back(a);
       } 
       string ans="";
       for(int i=0;i<n;i++)
       {
           if(s[i][i]=='1')
           {
               ans=ans+'0';
           }
           else
           {
               ans=ans+'1';
           }
       }
       cout<<ans<<endl;
    }
}