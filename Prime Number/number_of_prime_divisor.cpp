#include<bits/stdc++.h>
using namespace std;

void nasim()
{
    int n;
    cin>>n;
    int arr[n+4]={0};
    bool prime[n+4]={false};

    arr[0]=0,arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            arr[i]=1;
            for(int j=i+i;j<=n;j+=i)
            {
                prime[j]=true;
                arr[j]++;
            }
        }
    }
    int cnt =0;
    

    for(int i=0;i<=n;i++)
    {
        cout<< i << "=>"<< arr[i]<<endl;
       
    }
    cout<<cnt<<endl;
}

int main()
{
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        nasim();
    }
}