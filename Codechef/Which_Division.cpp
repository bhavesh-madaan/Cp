#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a<1600)
        {
            cout<<"3";
        }
        else if(a<2000)
        {
            cout<<"2";
        }
        else
        {
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}