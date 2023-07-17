#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count[n];
    for(int i=0;i<=n;i++)
    {
        count[i]=0;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            count[j]++;
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<< count[i]<< endl;
    }
}