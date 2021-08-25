#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int maximum = 0;
    int ans = 0;
    map <int, int> mp;   
    for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            mp[temp]++;
            maximum = max(maximum,mp[temp]);
        }
    if(n<=2){
        ans = 0;
        }
        else{
        ans = min(n-maximum, n-2);
        }
        cout<<ans<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}