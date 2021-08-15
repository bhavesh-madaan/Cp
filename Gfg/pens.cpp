#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum=0;
	        sum+=n/10;
	        n=n-((n/10)*10);
	        sum+=n/5;
	        n=n-((n/5)*5);
	        
	        sum+=n/2;
	        n=n-((n/2)*2);
	        
	        sum+=n;
	        cout<<sum<<'\n';
	    
	}
	return 0;
}