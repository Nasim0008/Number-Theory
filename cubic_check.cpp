#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double value = cbrt(n);
    
    if(value == int(value))
    {
      cout<< "YES"<<endl;
    }
    else
    {
       cout<< "NO"<<endl;
    }
}