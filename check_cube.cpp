#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  value = ceil(pow(n,(1.0/3.0)));
    int  cnt = floor(pow(n,(1.0/3.0)));

    cout<< value<< " "<<cnt<<endl;
    if(cnt==value)
    {
      cout<< "YES"<<endl;
    }
    else
    {
       cout<< "NO"<<endl;
    }
}