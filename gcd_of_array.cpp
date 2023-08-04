#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int gcd = 0;
    for(int i=1;i<=n;i++)
    {
        gcd = __gcd(arr[i],gcd);
    }
    cout<<gcd<<endl;
}