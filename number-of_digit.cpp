#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int digit_number = log10(n)+1;
    string a= to_string (n);
    int sz = a.size();
    if(digit_number==sz)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}