#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = sqrt(n);
    if(ans*ans != n)
    {
        cout<< "Not square number"<<endl;
    }
    else
    {
        cout<< "square Number"<<endl;
    }

}
