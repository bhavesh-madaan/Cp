#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1 ; 
    cin >> t ;
    while(t--)
    {
      int n , a , b , c  , d , p , q , y ; 
      cin >> n >> a >> b >> c >> d >> p >> q >> y ; 
      int location[n+1];
      for(int i=1 ; i<=n; i++)
        cin >> location[i]; 
        
      int walking = abs(location[b] - location[a]) * p ; 
      
      int train = INT_MAX;
      if(abs(location[c]-location[a]) * p <= y)
        train = y + abs(location[d] - location[c]) * q + abs(location[d] - location[b]) * p ; 
      cout << min(train, walking) << endl;
    }
}