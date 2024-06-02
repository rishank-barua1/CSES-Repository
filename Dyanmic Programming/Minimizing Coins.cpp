#include <bits/stdc++.h>
int dp[1000001];
using namespace std;
int solve(int sum,vector<int>&arr)
{
    if(sum<0)
        return 1e9+7;
    if(sum==0)
        return 0;
    if(dp[sum]!=-1)
        return dp[sum];
    int ans = INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        ans = min(ans,1+solve(sum-arr[i],arr));
    }
    return dp[sum]=ans;    
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

    int ans = solve(x,arr);

    if(ans>(1e9+7)){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}