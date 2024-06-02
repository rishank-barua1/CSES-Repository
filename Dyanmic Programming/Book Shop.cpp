#include <bits/stdc++.h>

const int mod = 1000000007;

using namespace std;

int main() {
    // Your code here
    int n,x;
    cin>>n>>x;
    vector<int>books(n),pages(n);

    for(int i=0;i<n;i++)
    {
        cin>>books[i];
    }

    for(int i=0;i<x;i++){
        cin>>pages[i];
    }

    vector<int> dp(x + 1, 0); // dp[j] = max pages with budget j

    for (int i = 0; i < n; i++) {
        for (int j = x; j >= books[i]; j--) {
            dp[j] = max(dp[j], dp[j - books[i]] + pages[i]);
        }
    }

    cout << dp[x] << endl;
    return 0;
}