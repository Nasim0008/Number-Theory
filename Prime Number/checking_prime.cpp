#include<bits/stdc++.h>
using namespace std;
bool first(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool second(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n<=3)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }

    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool third(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n<=3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }

    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0)
        {
            return false;
        }
        if(n%(i+2)==0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int n;
    cin>>n;
    if(first(n) && second(n) && third(n))
    {
        cout<< "Prime Number"<<endl;
    }
    else
    {
        cout<< "Not Prime Number"<<endl;
    }
}