#include<bits/stdc++.h>
using namespace std;
#define N  1000000
int divisor_of[N+4];

int main()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            divisor_of[j]++;
        }
    }
    cout<<divisor_of[10]<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<divisor_of[i]<<endl;
    }
}