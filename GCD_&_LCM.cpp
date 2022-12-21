#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd =__gcd(a,b);
    int lcm = (a/gcd)*b;
    cout<< gcd<<" "<<lcm<<endl;

}