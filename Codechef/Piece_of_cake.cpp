#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.size();
	    int c=1;
	    bool f=false;
	    sort(s.begin(),s.end());
	    for(int i=0;i<l;i++)
	    {
	       if(s[i+1]==s[i])
	       {
	           c++;
	       }else
	       {
	           if(c==l-c)
	           {
	               cout<<"YES"<<endl;
	               f=true;
	               break;
	           }else
	           {
	               c=1;
	           }
	       }
	    }
	    if(!f)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
