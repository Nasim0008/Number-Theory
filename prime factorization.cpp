#include<bits/stdc++.h>
using namespace std;
void  primefactorization(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        int cnt=0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
        }
        cout<<i<< "^"<<cnt<< ",";
   }
    if(n>1)
    {
        cout<<n<<"^"<<1<<endl;
    }
    else
    {
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    primefactorization(n);
}
