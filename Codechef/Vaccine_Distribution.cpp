#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,d;
        cin>>n>>d;
        long long count=0,no=0;
        for(int i=0;i<n;i++)
        {
            long long temp;
            cin>>temp;
            if(temp>=80 || temp<=9){
                count++;
            }else{
                no++;
            }
        }
        long long days = 0;
        while(count>0){
            days++;
            count-=d;
        }
        while(no>0){
            days++;
            no-=d;
        }
        cout<<days<<"\n";
    }
}