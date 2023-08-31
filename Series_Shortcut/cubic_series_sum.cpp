/*
(1^3) + (2^3)+ (3^3) + .......+ (n^3)
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    ll sum = (n*(n+1)/2);
    ll final_sum = sum*sum;
    cout<<final_sum<<endl;
    
}
