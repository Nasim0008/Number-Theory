#include<bits/stdc++.h>
using namespace std;
void sieve(int a,int n)
{
    int prime[n]={0};
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=a;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<< i<< " ";
        }
    }
}
int main()
{
    int first,last;
    cin>>first>>last;
    sieve(first,last);

}