#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        cout<< "Not Prime Number"<<endl;
        return 0;
    }
    cout<< "Prime Number"<<endl;
}