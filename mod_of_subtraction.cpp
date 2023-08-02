#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,mod;
    cin>>a>>b>>mod;
    // find (a-b)%mod;
    int mod_of_a_minus_b = ((a%mod)-(b%mod)+mod)%mod;
    cout<< mod_of_a_minus_b<<endl;
}