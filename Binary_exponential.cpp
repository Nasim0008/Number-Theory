#include<bits/stdc++.h>
using namespace std;
#define mod      1000000007

int power(int base,int pow)
{
    int res = 1;
    while(pow!=0)
    {
        if(pow&1)
        {
            res= (res*base)%mod;
            pow--;
        }
        else
        {
            base=(base*base)%mod;
            pow/=2;
        }
    }
    return res;
}
int main()
{
    int base,pow;
    cin>>base>>pow;
    int ans = power(base,pow);
    cout<<ans<<endl;
}