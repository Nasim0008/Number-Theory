#include<bits/stdc++.h>
using namespace std;

vector<int>seive(int n)
{
    bool prime[n+3];
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    vector<int>ans;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>ans = seive(n);
    for(auto u:ans)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}