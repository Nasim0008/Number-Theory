#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int c= ceil(log2(n));
    int f=floor(log2(n));
    if(c==f)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;    
    }
}