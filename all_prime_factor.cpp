#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n/=i;
        }
    }

    if(n>1)
    {
        v.push_back(n);
    }

    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;

}