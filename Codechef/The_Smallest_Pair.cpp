#include<bits/stdc++.h>
using namespace std;
int main() 
{	
	int t;
	cin>>t;
	while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
        {
	        cin>>a[i];
	    }
	    for(int i=0;i<2;i++)
        {
            for(int j=1+i;j<n;j++)
            {
	            if(a[i]>=a[j])
                {
	                swap(a[i],a[j]);
	            }
	        }
	    }
	    cout<<a[0]+a[1]<<endl;
	}
    return 0;
}
