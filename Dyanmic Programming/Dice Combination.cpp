#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
int solve(int n,int mod)
{
    if(n<0)
        return 0;

    if(n==0)
        return 1;

    if(dp[n]!=-1)
        return dp[n];
    
    int ans = 0;
    for(int i=1;i<=6;i++)
    {
        ans = (ans+solve(n-i,mod))%mod;
    }
    return dp[n] = ans;
}
int main() {
    // Your code here
    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    const long long mod = 1e9+7;
    cout<<solve(n,mod)<<endl;
    return 0;
}