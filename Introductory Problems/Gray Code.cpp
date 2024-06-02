#include <bits/stdc++.h>

using namespace std;
void graycode(string s, int n)
{
    if(s.length()==n)
    {
        cout<<s<<endl;
    }

    if(s[s.length()-1]=='0')
    {
        s.push_back('1');
        graycode(s,n);
    }
    else{
        s.push_back('0');
        graycode(s,n);
    }
}
int main() {
    // Your code here
    int n;
    cin>>n;
    graycode("0",n);
    graycode("1",n);
    return 0;
}