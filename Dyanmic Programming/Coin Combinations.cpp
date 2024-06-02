#include <bits/stdc++.h>
const int mod = 1000000007;
using namespace std;
int dp[1000001];
int solve(int x,vector<int>&arr)
{
    if(x<0)
    {
        return 0;
    }
    if(x==0)
    {
        return 1;
    }
    if(dp[x]!=-1)
        return dp[x];
    int ans = 0;
    for(int i=0;i<arr.size();i++)
    {
        ans =  (ans+solve(x-arr[i],arr))%mod;
    }
    return dp[x] =ans;
}
int main() {
    // Your code here
    memset(dp,-1,sizeof(dp));
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(x,arr)<<endl;
    return 0;
}