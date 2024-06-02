#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code here
    int n,x;
    cin>>n>>x;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    vector<bool>vis(n,false);

    int ans=0;

    for(int i=0;i<n;i++)
    {
        int index = upper_bound(arr.begin(),arr.end(),x-arr[i])-arr.begin();
        cout<<index<<endl;
    }
    return 0;
}