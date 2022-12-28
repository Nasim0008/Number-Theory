#include<bits/stdc++.h>
using namespace std;
int find_gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return find_gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=find_gcd(a,b);
    cout<< ans<<endl;
}