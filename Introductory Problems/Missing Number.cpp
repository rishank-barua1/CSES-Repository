#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>sz(n+1);
    

    for(int i=0;i<n-1;i++)
    {
        int t;
        cin>>t;
        sz[t]++;
    }

    for(int i=1;i<=n;i++)
    {
        if(sz[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}