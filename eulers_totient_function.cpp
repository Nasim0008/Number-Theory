
/*
 n = p1*p2*......*pi// all the unique prime factor
 total number of co prime number between 1 to n with the n = n*((p1-1)/p1)*((p2-1)/p2)*....*((pi-1)/pi)
*/

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