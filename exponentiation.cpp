#include<bits/stdc++.h>
using namespace std;
int exp(int base,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    int X = exp(base,pow/2);
    if(pow%2==0)
    {
        return X*X;
    }
    else
    {
        return X*X*base;
    }
}
int main()
{
    int pow,base;
    cin>>base>>pow;
    cout<< exp(base,pow)<<endl;
}