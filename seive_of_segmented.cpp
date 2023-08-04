#include <bits/stdc++.h>
using namespace std;
vector<int> seive(int n)
{
    bool prime[n + 3];
    for (int i = 0; i <= n; i++)
    {
        prime[i] = true;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (prime[i] == true)
        {
            for (int j = 3 * i; j <= n; j += (2 * i))
            {
                prime[j] = false;
            }
        }
    }
    vector<int> v;
    v.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (prime[i] == true)
        {
            v.push_back(i);
        }
    }
    return v;
}
vector<int> segseive(vector<int>v, int l, int r)
{
    if (l == 1)
    {
        l++;
    }
    int ind = r - l + 1;
    bool prime[ind + 4];
    for (int i = 0; i <= ind; i++)
    {
        prime[i] = true;
    }
    for (auto u : v)
    {
        if (u * u <= r)
        {
            int low = ((l/ u) * u);
            if (low < l)
            {
                low += u;
            }

            for (int i = low; i <= r; i += u)
            {
                if (i != u)
                {
                    prime[i - l] = false;
                }
            }
        }
    }
    vector<int> ans;
    for (int i =0; i < ind ;i++)
    {
        if (prime[i] == true)
        {
            ans.push_back(i+l);
        }
    }
    return ans;
}
int main()
{
    int l, r;
    cin >> l >> r;
    int range = sqrt(r);
    vector<int> v = seive(range);
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;
    vector<int> ans = segseive(v, l, r);
    for (auto u : ans)
    {
        cout << u << " ";
    }
    cout << endl;
}