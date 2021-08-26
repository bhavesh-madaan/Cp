#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float time,speed;
        speed=k1*k2*k3*v;
        time=100/speed;
        if(time<9.575)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}