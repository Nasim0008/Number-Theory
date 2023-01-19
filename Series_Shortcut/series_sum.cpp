// find the value of (2^0 + 2^1 + 2^2 + ....... + 2^power);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int power;
    cin>>power;
    cout<< pow(2,power+1)-1<<endl;
}