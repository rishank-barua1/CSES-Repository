#include<bits/stdc++.h>
using namespace std;

int main()
{
    const long long mod = 1e9+7;
    long long n;
    cin>>n;

    long long ans = 1;

    for(long long i=0;i<n;i++)
    {
        ans = (ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}