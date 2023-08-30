#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int n;
    cin>>n;
    long long int  ans =0;
    for(auto u:s)
    {
        int num = u-'0';
        ans =  ((ans*10)+num)%n;
    }
    if(ans==0)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }

}