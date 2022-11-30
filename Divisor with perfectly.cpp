#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
   int s = unique(v.begin(),v.end())-v.begin();
   cout<<1<< " ";
   for(int i=0;i<s;i++)
   {
       cout<<v[i]<< " ";
   }
   cout<<n<<endl;
}

