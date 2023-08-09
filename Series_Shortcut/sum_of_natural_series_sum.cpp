// 1+ (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) +........+ (1+2+3+4+5+....n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int square_sum = (n*(n+1)*((n+n+1)))/6;
    long long int natural_sum = (n*(n+1))/2;
    cout<< (square_sum+natural_sum)/2<<endl;
}