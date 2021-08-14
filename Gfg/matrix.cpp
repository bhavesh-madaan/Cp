#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int i,j,n,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	        cin>>a[i][j];
	        }
	    }
	    bool b=false;
	    int count=0;
	    while(!b)
	    {
	        
	        for(i=0;i<n;i++)
	        {
	            for( j=0;j<m;j++)
	            {
	                if(a[i][j]==0)
	                {
	                    if(i-1>=0)
	                    a[i-1][j]=0;
	                    if(i+1<n)
	                    a[i+1][j]=0;
	                    if(j-1>=0)
	                    a[i][j-1]=0;
	                    if(j+1<n)
	                    a[i][j+1]=0;
	                }
	            }
	        }
	        b=true;
	        for( i=0;i<n;i++)
	        {
	            for( j=0;j<m;j++)
	            {
	                if(a[i][j]!=0)
	                b=false;
	            }
	        }
	        count++;
	    }
	    cout<<count<<'\n';
	}
	return 0;
}