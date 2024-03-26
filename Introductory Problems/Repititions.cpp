#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    char curr = s[0];

    int i=0,count=0,ans=0;
    while(i<s.length())
    {
        if(s[i]==curr)
        {
            count++;
        }
        else{
            count=1;
            curr = s[i];
        }
        ans = max(ans,count);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}