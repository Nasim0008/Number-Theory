#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum =0;
    for(char u:s)
    {
        sum+=(u-'0');
    }
    cout<<sum<<endl;
}