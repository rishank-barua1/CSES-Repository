#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans= 0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<arr[i-1])
        {
            int temp = (abs(arr[i]-arr[i-1]));
            ans += temp;
            arr[i] = arr[i-1];
        }
    }
    // for(int i:arr)
    //     cout<<i<<" ";
    // cout<<endl;
    cout<<ans<<endl;
    return 0;
}