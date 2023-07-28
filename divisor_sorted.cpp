#include<bits/stdc++.h>
using namespace std;
vector<int>divisor(int n)
{
     vector<int>v;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            v.push_back(i);
        }
        else if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
       
    }
     return v;
}
vector<int>div(int n)
{
    vector<int>v;
    vector<int>v1;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i!=i)
            {
                v.push_back(i);
                v1.push_back(n/i);
            }
            else
            {
                v.push_back(i);
            }
        }
    }
    for(int i=v1.size()-1;i>=0;i--)
    {
        v.push_back(v1[i]);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v = div(n);
    for(auto u:v)
    {
        cout<<u<<  " ";
    }
    cout<<endl;
}