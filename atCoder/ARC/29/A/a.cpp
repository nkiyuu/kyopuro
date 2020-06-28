#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> oniku;
    for (int i = 0; i < N; ++i)
    {
        int t;
        cin >> t;
        oniku.push_back(t);
    }

    int ans = 10000000;
    for (int i = 0; i < 1 << (N - 1); ++i)
    {
        int one = 0, two = 0;
        for (int j = 0; j < N; ++j)
        {
            (i >> j & 1 == 1) ? one += oniku[j] : two += oniku[j];
        }

        int a = max(one, two);
        if (ans > a)
        {
            ans = a;
        }
    }

    cout << ans << endl;
}