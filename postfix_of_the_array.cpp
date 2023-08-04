#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 4];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int gcd = 0;
    vector<int> v;
    v.push_back(gcd);
    for (int i = n; i >=1;i--)
    {
        gcd = __gcd(arr[i], gcd);
        v.push_back(gcd);
    }
    cout<< v.size()<<endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;
}