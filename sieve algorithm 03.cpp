#include<bits/stdc++.h>
using namespace std;
void seive()
{
    int a,n;
    cout<< "Enter the lower and upper bound: ";
    cin>>a>>n;
    vector<int>v;
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
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=a && v[i]<=n)
        {
            cout<<v[i]<< " ";
        }
    }
    cout<<endl;
}
int main()
{
   seive();
}
