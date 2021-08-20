// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    long long int primeProduct(int N)
    {
        long long int ans=1,a,i,j;
        for(i=2;i<=N;i++)
        {
            if((N%i)==0)
            {
              bool check=true;
              for(j=2;j<=i/2;j++)
              {
                  if(i%j==0)
                  {
                      check=false;
                      break;
                  }
              }
              if(check)
              {
                  ans=ans*i;
              }
            }
        }
    return ans;
    }
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.primeProduct(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends