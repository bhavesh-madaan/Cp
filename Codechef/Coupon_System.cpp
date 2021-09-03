#include<bits/stdc++.h>
using namespace std;

void soln(vector<vector<int>> arr,int x,int a)
{
    int b=0;
    int ans1=0;
    for(int i=0;i<a;i++)
        {
            if(arr[i][1]==x)
            {
                ans1=arr[i][2];
                if(b<=ans1)
                {
                        b=ans1;
                        cout<<b<<" "<<arr[i][0]<<endl;
                }
             }
        }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        vector <vector <int>> arr;
        int b=0,ans1=0;
        for(int i=0;i<a;i++)
        {
            vector <int> temp;
            for(int j=0;j<3;j++)
            {
                int temp2;
                cin>>temp2;
                temp.push_back(temp2);
            }
            arr.push_back(temp);
        }
        soln(arr,1,a);
        soln(arr,2,a);
        soln(arr,3,a);
    }
    return 0;
}
