/*
(a+b)%m = ((a%m)+(b%m))%m;
(a+b+c+d+........+y+z)%m = ((a%m)+(b%m)+(c%m)+(d%m)+.........+(y%m)+(z%m))%m;
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    int mod = 10;
    for (int i = 1; i <= n; i++)
    {
        sum = ((sum % mod) + (i % mod)) % mod;
    }
    sum = sum % mod;
    cout << sum << endl;
}