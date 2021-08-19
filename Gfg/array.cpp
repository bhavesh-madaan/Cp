#include <iostream>
using namespace std;

int main() {
    int n,d,t,i;
    cin >> t;
    while(t--)
    {
    cin >> n;
    cin >> d;
    int a[n];
    for(i=0;i<n;i++)
    cin >> a[i];
    for(i=d;i<n;i++)
    cout<<a[i]<<" ";
    for(i=0;i<d;i++)
    cout<<a[i]<<" ";
    cout<<'\n';
    }
	return 0;
}