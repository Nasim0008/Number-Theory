#include<bits/stdc++.h>
using namespace std;
void seive()
{
    int n;
    cin>>n;
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
            cout<< i<< " ";
        }
    }
    cout<<endl;

}
int main()
{
   seive();
}
