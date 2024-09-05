
#include <bits/stdc++.h>
using namespace std;

#define FAST()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define wTC()                         \
    int t;                            \
    cin >> t;                         \
    for (int i = 1; i <= t; i++)      \
    {                                 \
        cout << "Case " << i << ": "; \
        nasim();                      \
    }
#define TC()     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        nasim(); \
    }
#define nTC()    \
    int t = 1;   \
    while (t--)  \
    {            \
        nasim(); \
    }

#define endl "\n"
#define ll long long int
#define ull unsigned long long int
const int mod = 1e9 + 7;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
ll natural_sum(int n)
{
    ll sum = (n * (n + 1) / 2);
    return sum;
}
int value_of_n_from_natural_sum(ll sum)
{
    sum *= 2;
    int a = 1;
    int b = 1;
    int d = (b * b) - (4 * a * (-sum));
    d = sqrt(d);
    int n = (((-b) + (d)) / (2 * a));
    return n;
}
int value_of_nth_term_of_ap(ll first, ll n, ll dif)
{
    ll last = first + ((n - 1) * dif);
    return last;
}
ll nth_term_of_ap(ll first, ll last, ll dif)
{
    ll n = ((last - first) / dif) + 1;
    return n;
}
ll sum_of_ap(ll first, ll last, ll dif)
{
    ll n = nth_term_of_ap(first, last, dif);
    ll sum = (n / 2) * (first + last);
    return sum;
}
ll binary_exponentiation(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            result = result * base;
        }
        base = base * base;
        power = power / 2;
    }
    return result;
}
ll binary_exponentiation_with_mod(ll base, ll power, ll m)
{
    base %= m;
    ll result = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        power /= 2;
    }
    return result;
}
int square_root(int N)
{
    int low = 1;
    int high = N;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= N)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
ll normal_gcd(ll a, ll b)
{
    while (a > 0 and b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return max(a, b);
}
ll normal_lcm(ll a, ll b)
{
    return (a / (normal_gcd(a, b))) * b;
}
ll gcd_of_array(ll arr[], int N)
{
    ll gcd = 0;
    for (int i = 0; i < N; i++)
    {
        gcd = normal_gcd(arr[i], gcd);
    }
    return gcd;
}
set<ll> unique_prime_divisor(ll N)
{
    set<ll> se;
    for (int i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            se.insert(i);
            N /= i;
        }
    }
    if (N > 1)
    {
        se.insert(N);
    }
    return se;
}
ll sum_of_divisor(ll N)
{
    ll sum = 1;
    for (int i = 2; i * i <= N; i++)
    {
        ll value = 1;
        ll result = 1;
        while (N % i == 0)
        {
            N /= i;
            value *= i;
            result += value;
        }
        sum *= result;
    }
    if (N > 1)
    {
        sum *= (1 + N);
    }
    return sum;
}
vector<ll> all_prime_divisors(ll N)
{
    vector<ll> v;
    for (int i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            v.push_back(i);
            N /= i;
        }
    }
    if (N > 1)
    {
        v.push_back(N);
    }
    return v;
}
vector<pair<int, int>> prime_divisor_with_frequency(ll N)
{
    vector<pair<int, int>> v;
    for (int i = 2; i * i <= N; i++)
    {
        int cnt = 0;
        while (N % i == 0)
        {
            cnt++;
            N /= i;
        }
        if (cnt > 0)
        {
            v.push_back({i, cnt});
        }
    }
    if (N > 1)
    {
        v.push_back({N, 1});
    }
    return v;
}
ll lcm_of_array(ll arr[], int N)
{
    ll lcm = arr[0];
    for (int i = 1; i < N; i++)
    {
        lcm = (arr[i] / normal_gcd(arr[i], lcm)) * lcm;
    }
    return lcm;
}
ll total_numbers_of_divisors(ll N)
{
    ll ans = 1;
    int cnt = 0;
    while (N % 2 == 0)
    {
        N /= 2;
        cnt++;
    }
    ans *= (cnt + 1);
    for (int i = 3; i * i <= N; i += 2)
    {
        cnt = 0;
        while (N % i == 0)
        {
            cnt++;
            N /= i;
        }
        ans *= (cnt + 1);
    }
    if (N > 1)
    {
        ans *= (2);
    }
    return ans;
}
// perfect square number has odd number of divisors
ll count_the_divisors(ll N)
{
    ll cnt = 0;
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i == N)
        {
            cnt++;
        }
        else if (N % i == 0)
        {
            cnt += 2;
        }
    }
    return cnt;
}
vector<ll> find_divisors(ll N)
{
    vector<ll> v, x;
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i == N)
        {
            v.push_back(i);
        }
        else if (N % i == 0)
        {
            v.push_back(i);
            x.push_back(N / i);
        }
    }
    for (int i = x.size() - 1; i >= 0; i--)
    {
        v.push_back(x[i]);
    }
    return v;
}
int *count_range_divisors(int N)
{
    int *count = new int[N + 2];
    for (int i = 1; i <= N; i++)
    {
        count[i] = 0;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            count[j]++;
        }
    }
    return count;
    //  int *count = count_range_divisors(n);
    //  *count means count[n]
}
void find_range_divisors(int N)
{
    // this code does not return anything
    vector<int> v[N + 2];
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            v[j].push_back(i);
        }
    }
}
bool divisibility_test(string s, int Mod)
{
    int ans = 0;
    for (auto u : s)
    {
        int num = u - '0';
        ans = ((ans * 10) + num) % Mod;
    }
    if (ans == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool prime(ll N)
{
    if (N <= 1)
    {
        return false;
    }
    if (N <= 3)
    {
        return true;
    }
    if (N % 2 == 0)
    {
        return false;
    }
    if (N % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= N; i += 6)
    {
        if (N % i == 0)
        {
            return false;
        }
        if (N % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> seive(int N)
{
    bool prime[N + 1];
    for (int i = 1; i <= N; i++)
    {
        prime[i] = true;
    }

    for (int i = 3; i * i <= N; i += 2)
    {
        if (prime[i] == true)
        {
            for (int j = (3 * i); j <= N; j += (2 * i))
            {
                prime[j] = false;
            }
        }
    }
    vector<int> v;
    v.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (prime[i] == true)
        {
            v.push_back(i);
        }
    }
    return v;
}
vector<ll> segmented_seive(ll L, ll R)
{
    int N = 1e5;
    bool prime[N + 1];
    for (int i = 2; i <= N; i++)
    {
        prime[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (prime[i] == true)
        {
            for (int j = (3 * i); j <= N; j += (2 * i))
            {
                prime[j] = false;
            }
        }
    }
    vector<int> v;
    v.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (prime[i] == true)
        {
            v.push_back(i);
        }
    }
    // when L=1 ,segmented seive does not work
    if (L == 1)
    {
        L++;
    }
    int ind = R - L + 1;
    for (int i = 0; i <= ind; i++)
    {
        prime[i] = true;
    }

    for (auto u : v)
    {
        if (u * u <= R)
        {
            int low = (L / u) * u;
            if (low < L)
            {
                low += u;
            }
            for (int i = low; i <= R; i += u)
            {
                if (i != u)
                {
                    prime[i - L] = false;
                }
            }
        }
    }
    vector<ll> ans;
    for (int i = 0; i < ind; i++)
    {
        if (prime[i] == true)
        {
            ans.push_back(i + L);
        }
    }
    return ans;
}
ll addion_modulo(ll a,ll b,ll m)
{
    ll ans = ((a%m)+(b%m)%m);
    return ans;
}
ll multiplication_modulo(ll a,ll b,ll m)
{
    ll ans  = ((a%m)*(b%m))%m;
    return ans;
}
ll single_subtraction_modulo(ll n,ll m)
{
    ll ans = n%m;
    if(ans<0)
    {
        ans+=m;
    }
    return ans;
}
void nasim()
{
     int n;
    cin >> n;

    if (n != 2 and n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST()
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

    nTC();

    // TC();

    // wTC();
}

/*

## modulo division code:


ll multiplication_modulo(ll a,ll b,ll m)
{
    ll ans  = ((a%m)*(b%m))%m;
    return ans;
}
ll binary_exponentiation_with_mod(ll base, ll power, ll m)
{
    base %= m;
    ll result = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        power /= 2;
    }
    return result;
}
int main()
{
    ll a,b,m;
    cin>>a>>b>>m;
    ll power = binary_exponentiation_with_mod(b,m-2,m);
    ll ans = multiplication_modulo(a,power,m);
    cout<<ans<<endl;
}

*/
/*

 ## euler totiend funtion: connt the number of co prime with N from 1 to N

set<int>prime_factor(int n)
{
    set<int>v;
    while(n%2==0)
    {
        v.insert(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            v.insert(i);
            n/=i;
        }
    }
    if(n>1)
    {
        v.insert(n);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int value = n;
    set<int>se = prime_factor(value);

    int ans = n;
    // cout<<ans<<endl;
    for(auto u:se)
    {
        ans *= ((u-1));
        ans/=u;
    }
    cout<<ans<<endl;
}*/
/*
## this the code for finding segmented seive

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
}*/

/*

 ## this the code for the finding prime factorzation with multiple testcase


const int N = 1000000;
int spf[N + 1];
void prime_factorization_for_multiple_testcase()
{
    for(int i=1;i<=N;i++)
    {
        spf[i]=i;
    }

    for(int i=2;i*i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                spf[j]=i;
            }
        }
    }
}
int main()
{
    prime_factorization_for_multiple_testcase();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n!=1)
        {
            cout<<spf[n]<<" ";
            n/=spf[n];
        }
        cout<<endl;
    }
}*/

/*
 ### lcm of the array with modulo

const int mod = 1000000007;
ll binary_exponentiation(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            result = result * base;
        }
        base = base * base;
        power = power / 2;
    }
    return result;
}
const int N = 1000000;
int spf[N + 1];
void prime_factorization_for_multiple_testcase()
{
    for (int i = 1; i <= N; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i * i <= N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= N; j += i)
            {
                spf[j] = i;
            }
        }
    }
}
ll lcm_of_array_with_mod(int arr[], int n)
{
    unordered_map<ll, ll> mx;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        unordered_map<ll, ll> temp;
        while (num > 1)
        {
            int factor = spf[num];
            temp[factor]++;
            num /= factor;
        }
        for (auto u : temp)
        {
            mx[u.first] = max(mx[u.first], u.second);
        }
    }
    ll ans = 1;
    for (auto u : mx)
    {
        ans = (ans * (binary_exponentiation(u.first, u.second))) % mod;
    }
    return ans;
}
int main()
{
    prime_factorization_for_multiple_testcase();

    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll lcm = lcm_of_array_with_mod(arr, n);
    cout << lcm << endl;
}
*/
/*
## count the umber of premetive root of a prime number N

set<int>prime_factor(int n)
{
    set<int>v;
    while(n%2==0)
    {
        v.insert(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            v.insert(i);
            n/=i;
        }
    }
    if(n>1)
    {
        v.insert(n);
    }
    return v;
}
void nasim()
{
    int n;
    cin>>n;
    n--;
    int value = n;
    set<int>se = prime_factor(value);

    int ans = n;
    // cout<<ans<<endl;
    for(auto u:se)
    {
        ans *= ((u-1));
        ans/=u;
    }
    cout<<ans<<endl;
}
*/

