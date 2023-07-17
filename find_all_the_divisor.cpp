#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v[n+4];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[j].push_back(i);
        }
    }
    for(auto u:v)
    {
        for(auto r:u)
        {
            cout<<r<< " ";
        }
        cout<<endl;
    }
}
