#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    sum*=2;
    int a=1;
    int b = 1;
    int d = (b*b)-(4*a*(-sum));
    d = sqrt(d);
    if(d>0)
    {
        int n =(((-b)+(d))/(2*a));
        cout<<n<<endl;
    }
    else
    {
        cout<< "complex number "<<endl;
    }
    
}