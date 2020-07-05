#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t > 0)
    {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;

        string ans = "Yes";
        if (min(a, b) < m)
        {
            ans = "No"; 
        }

        if (a + b < n + m)
        {
            ans = "No";
        }

        cout << ans << endl;
        t--;
    }
}