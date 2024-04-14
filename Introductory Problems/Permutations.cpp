#include<bits/stdc++.h>
using namespace std;
//logic -> can write odd and then even numbers, or first even then odd,  
//wrong cases -> last even 2, first odd 1 (n=2)
//               last odd 3, first even 2 (n=3)
int main()
{
    int n;
    cin>>n;
    
    if(n==2 or n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}