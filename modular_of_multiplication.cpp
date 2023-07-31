/*
(a*b)%m = ((a%m)*(b%m))%m;
(a*b*c*d*............*y*z)%m = ((a%m)*(b%m)*(c%m)*(d%m)*..........*(y%m)*(z%m))%m;
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll mod = 1e9+7;
    ll fact= 1;
    for(int i=1;i<=n;i++)
    {
        fact = ((fact%mod)*(i%mod))%mod;
    }

    fact = fact%mod;
    cout<<fact<<endl;
}