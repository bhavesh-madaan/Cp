#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    int b;
    cin>>s;
    if(s[8]=='P')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            cout<<s.substr(0,8)<<endl;
        }
        else
        {
            a=s.substr(0,1);
            int b=stoi(s);
            int c=b+12;
            cout<<c<<s.substr(2,6)<<endl;
        }
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            cout<<"00"<<s.substr(2,6)<<endl;
        }
        else
        {
            cout<<s.substr(0,8)<<endl;
        }
    }
    return 0;
}