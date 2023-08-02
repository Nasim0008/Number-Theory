#include<bits/stdc++.h>
using namespace std;
set<int>prime_factor(int n)
{
    set<int>v;
    while(n%2==0)
    {
        v.insert(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            v.insert(i);
            n/=i;
        }
    }
    if(n>1)
    {
        v.insert(n);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int value = n;
    set<int>se = prime_factor(value);
  
    int ans = n;
    // cout<<ans<<endl;
    for(auto u:se)
    {
        ans *= ((u-1));
        ans/=u;
    }
    cout<<ans<<endl;
}