#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;

    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else{
        long long target = sum/2;
        vector<int>set(n+1,0);
        for(int i=n;i>=1;i--)
        {
            if(target-i>=0)
            {
                target -=i;
                set[i]++;
            }
            else{
                set[target]++;
                break;
            }
        }

        cout<<"YES"<<endl;
        vector<int>set1,set2;
        for(int i=1;i<=n;i++)
        {
            if(set[i]==0)
            {
                set2.push_back(i);
            }else{
                set1.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(int i:set1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(int i:set2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}