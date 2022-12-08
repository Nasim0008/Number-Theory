#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c = ceil(log10(n));
    int f = floor(log10(n));
    if(c==f)
    {
        cout<< "Yes, it is 10 exponential"<<endl;
    }
    else
    {
        cout<< "Not Exponential"<<endl;
    }
}