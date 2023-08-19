#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sum_of_divisor(int n)
{
    ll sum =0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            sum+=i;
        }
        else if(n%i==0)
        {
            sum+=i;
            sum+=(n/i);
        }
    }
}
int main()
{
    int n;
    cin>>n;
   ll sum =0;
   vector<int>v;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            sum+=i;
            v.push_back(i);
            
        }
        else if(n%i==0)
        {
            sum+=i;
            sum+=(n/i);
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    cout<< "sum = "<<sum <<endl;
    sort(v.begin(),v.end());
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}