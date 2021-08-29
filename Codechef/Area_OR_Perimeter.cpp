#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a,b;
	cin>>a>>b;
	long area,peri;
	area=a*b;
	peri=2*(a+b);
	if(area>peri)
    {
	    cout<<"Area"<<endl<<area<<endl;
    }
	else if(peri>area)
    {
	    cout<<"Peri"<<endl<<peri<<endl;
    }
	else
    {
	    cout<<"Eq"<<endl<<peri<<endl;
    }
	return 0;
}
