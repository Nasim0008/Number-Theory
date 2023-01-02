#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    set<int>s;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    cout<<s.size()<<endl;
    for(auto u:s)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    divisor(n);
}