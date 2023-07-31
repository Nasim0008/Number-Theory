#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int mod;
    cin>>mod;
    int ans = 0;
    for(int i=0;i<s.size();i++)
    {
        int num = s[i]-'0';
        ans = (ans*10)+num;
        cout<< ans<< " ";
        ans = ans%mod;
        cout<< ans<< endl;
    }
    cout<< "reminder : "<<ans<<endl;
}