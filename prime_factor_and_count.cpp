#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    int cnt =0;
    while(n%2==0)
    {
        cnt++;
        n/=2;
    }
    if(cnt>0)
    {
        v.push_back({2,cnt});
    }

    for(int i=3;i*i<=n;i+=2)
    {
        cnt=0;
        while(n%i==0)
        {
            cnt++;
            n/=i;
        }
        if(cnt>0)
        {
            v.push_back({i,cnt});
        }
        
    }

    if(n>1)
    {
        v.push_back({n,1});
    }

    for(auto u:v)
    {
        cout<<u.first<< "^"<<u.second<<endl;
    }
    cout<<endl;

}