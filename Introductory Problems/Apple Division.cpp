#include <bits/stdc++.h>

using namespace std;
long long solve(vector<long long>&arr,int i,long long curr1, long long curr2)
{
    if(i==arr.size())
    {
        return abs(curr1-curr2);
    }

    long long case1 = solve(arr,i+1,curr1+arr[i],curr2);

    long long case2 = solve(arr,i+1,curr1,curr2+arr[i]);

    return min(case1,case2);

}
int main() {
    // Your code here
    int n;
    cin>>n;
    vector<long long>arr(n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(arr,0,0,0)<<endl;
    
    return 0;
}