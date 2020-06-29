#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<long long> v1, v2;

    cin >> n;

    for (int i=0; i<n; ++i)
    {
        long long v;
        cin >> v;
        v1.push_back(v);
    }

    for (int i=0; i<n; ++i)
    {
        long long v;
        cin >> v;
        v2.push_back(v);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());

    long long ans = 0;

    for (int i=0; i<n; ++i)
    {
        ans += v1[i] * v2[i];
    }

    cout << ans << endl;
}