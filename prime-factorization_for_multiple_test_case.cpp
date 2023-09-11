#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
int spf[N + 1];
void prime_factorization_for_multiple_testcase()
{
    for(int i=1;i<=N;i++)
    {
        spf[i]=i;
    }

    for(int i=2;i*i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                spf[j]=i;
            }
        }
    }
}
int main()
{
    prime_factorization_for_multiple_testcase();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n!=1)
        {
            cout<<spf[n]<<" ";
            n/=spf[n];
        }
        cout<<endl;
    }
}