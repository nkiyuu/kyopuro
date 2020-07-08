#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<ll> A;
    priority_queue<ll> A_queue;
    for(int i=0; i<N; ++i)
    {
        ll a;
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(), A.end());
    ll ans = 0;
    while(A.size() > 0)
    {
        ll max = A.back();
        A.pop_back();
        if(A_queue.empty())
        {
            A_queue.push(max);
            continue;
        }

        ans += A_queue.top();
        A_queue.pop();
        A_queue.push(max);
        A_queue.push(max);
        
    }

    cout << ans << endl;
}