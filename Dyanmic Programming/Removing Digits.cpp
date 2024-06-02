#include <bits/stdc++.h>

const int mod = 1000000007;

using namespace std;
long long dp[1000002];
long long solve(long long n)
{
    if(n<0)
    {
        return 1e9;
    }
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
        return dp[n];
    vector<long long>digits;
    long long temp = n;
    while(temp!=0)
    {
        digits.push_back(temp%10);
        temp = temp/10;
    }
    for(int i:digits)
    { cout<<i<<" ";}
    cout<<endl;
    long long ans = INT_MAX;
    for(long long i=0;i<digits.size();i++)
    {
        if(digits[i]==0)
            continue;
        ans = min(ans,1+solve(n-digits[i]));
    }
    cout<<n<<" "<<ans<<endl;
    return dp[n] = ans;
}
int main() {
    // Your code here
    long long n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    
   
    cout<<solve(n)<<endl;
    return 0;
}