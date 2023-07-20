/*
## characteristics of prime number:
1. Only positive integer
2. without 1 and n, there is no divisor between(2 & n-1)
3. 1 is not prime because according to the prime number defination, 
   1 is divisible by 1 and number itself also 1
*/
/*
In this code ,applying the (6k+1) and (6k-1) formula
1. first check n is divisible by 2 or 3
2. then check for the 5 and 7 as well
*/

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==2 or n==3)
    {
        return true;
    }
    if(n<=1 or n%2==0 or n%3==0) // check either negative or even or divisible by 3 
    {
        return false;
    }
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0)// check for the 5 
        {
            return false;
        }
        if(n%(i+2)==0) // check for the 7
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
    if(isprime(n)==true)
    {
        cout<< "Prime Number"<<endl;
    }
    else
    {
        cout<< "Not Prime Number"<<endl;
    }
}