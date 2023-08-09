// 1^2 + 2^2 + 3^2 + 4^2 +.......+ n^2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum = (n*(n+1)*((n+n+1)))/6;
    cout<< sum<<endl;
}