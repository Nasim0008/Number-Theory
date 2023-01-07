#include<bits/stdc++.h>
using namespace std;
void seive(int first,int n)
{
    bool prime[n+1];
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
    for(int i=first;i<=n;i++)
    {
        if(prime[i]==false)
        {
            cout<<i<< " ";
        }

    }
    cout<<endl;
}
 int main()
{
    int start,end;
    cin>>start>>end;
    seive(start,end);
}