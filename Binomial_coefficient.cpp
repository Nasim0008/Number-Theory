/*
nCr = ((n!)/(r!)*(n-r)!)
n1 = n! = factorial(n);
r1 = r! = factoral(r);
k = (n-r)! = factoral(n-r);
r1_inverse = binomial exponentail of(r1,mod-2);
k_inverse = binomial exponentail of (k, mod-2);
then apply mod of multiplication between n1 and r1_inverse and keep it into final_ans ;
then again apply mod of multiplication betweeen final_ans and k_inverse;
then final_ans is the value of binomial co-efficient of n and r;


*/


#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
#define ll long long int
ll factorial(int n)
{
    ll ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans = ((ans%mod)*(i%mod))%mod;
    }
    return ans%mod;
}
ll power(ll base, ll pow)
{
    ll ans = 1;
    while(pow!=0)
    {
        if(pow%2==1)
        {
            ans = (ans*base)%mod;
            pow--;
        }
        else if(pow%2==0)
        {
            base = (base*base)%mod;
            pow/=2;
        }
    }
    return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;

    ll n1 = factorial(n)%mod;
    
    ll r1 = factorial(r)%mod;
    ll k = factorial(n-r)%mod;
    // cout<<n1<<" "<<r1<< " "<<k<<endl;

    ll r1_inverse = power(r1,mod-2)%mod;
    ll k_inverse = power(k,mod-2)%mod;
    ll final_ans = ((n1%mod)*(r1_inverse%mod))%mod;
    final_ans = ((final_ans%mod)*(k_inverse%mod))%mod;
    cout<< final_ans<<endl;

}