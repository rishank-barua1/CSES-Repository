#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code here
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>demands,flat;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        demands.push_back(temp);
    }

    for(int i=0;i<m;i++)
    {
        cin>>temp;
        flat.push_back(temp);
    }

    sort(demands.begin(),demands.end());
    sort(flat.begin(),flat.end());

    vector<bool>vis(m,false);
    int cnt=0;
    for(int i=0;i<flat.size();i++)
    {
        int index = find(demands.begin(),demands.end(),flat[i])-demands.begin();
        if(index==m)
        {
            index = find(demands.begin(),demands.end(),flat[i]-5)-demands.begin();
            if(index==m)
            {
                index = find(demands.begin(),demands.end(),flat[i]+5)-demands.begin();
            }
        }
        if(vis[index]==false)
        {
            vis[index] = true;
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}