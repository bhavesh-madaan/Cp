#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int rank = 1;
    int start = 0;
    vector <int> ans;
    for(int i=m-1;i>=0;i--){
        while(b[i]<a[start] && start<n){
            rank++;
            if(start>0 && a[start]==a[start-1]){
                rank--;
            }
            start++;
        }
        ans.push_back(rank);
    }
    for(int i=m-1;i>=0;i--){
        cout<<ans[i]<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solution();
    }    
    return 0;
}