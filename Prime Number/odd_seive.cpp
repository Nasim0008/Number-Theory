#include <bits/stdc++.h>
using namespace std;
void oddseive(int n)
{
    n;
    bool prime[n + 4];
    for (int i = 0; i <= n + 2; i++)
    {
        prime[i] = true;
    }

    for(int i=3;i*i<=n;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=3*i;j<=n;j+=(i+i))
            {
                prime[j]=false;
            }
        }

    }
    vector<int>v;
    v.push_back(2);

    for(int i=3;i<=n;i+=2)
    {
        if(prime[i]==true)
        {
            v.push_back(i);
        }
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}
int main()
{
     int n;
     cin >> n;
     oddseive(n);
}