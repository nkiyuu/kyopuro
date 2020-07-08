#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

int main()
{
    ll N, K;
    cin >> N >> K;
    ll mod = (1e9 + 7);
    vector<ll> plus, minus;
    for (int i = 0; i < N; ++i)
    {
        ll a;
        cin >> a;
        if (a >= 0)
        {
            plus.push_back(a);
        }
        else
        {
            minus.push_back(a);
        }
    }

    sort(plus.begin(), plus.end());
    sort(minus.begin(), minus.end(), greater<ll>());

    ll ans = 1;
    ll p, m;
    if (plus.size() == 0 && K % 2 == 1)
    {
        for (int i = 0; i < K; ++i)
        {
            ans *= minus[i];
        }
    }
    else if (minus.size() == 0) {
        for (int i = 0; i < K; ++i)
        {
            ans *= plus[plus.size() - 1 - i];
            cout << ans << endl;
            ans %= mod;
        }
    }
    else
    {
        for (int i = 0; i < K; ++i)
        {
            p = plus.back();
            m = minus.back();
            if (p >= -1 * m)
            {
                ans *= p;
                ans %= mod;
                plus.pop_back();
            }
            else
            {
                ans *= m;
                ans %= mod;
                minus.pop_back();
            }
        }

        if (ans < 0 && N != K)
        {
            if (plus.size() == 0)
            {
                ans = ans / p * minus.back();
                ans %= mod;
            }
            else if(minus.size() == 0)
            {
                ans = ans / m * plus.back();
                ans %= mod;
            }
            if (p * plus.back() >= m * minus.back())
            {
                ans = ans / m * plus.back();
                ans %= mod;
            }
            else
            {
               ans = ans / p * minus.back(); 
               ans %= mod;
            }
        }
    }

    if (ans < 0)
    {
        cout << mod + ans << endl;
    }
    else{
        cout << ans << endl;
    }
}