#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

const long long INF = 1LL << 60;
vector<int> h;
vector<long long> H;

long long dp(int idx)
{
  if (idx == 0)
  {
    H[0] = 0;
    return 0;
  }

  if (idx == 1)
  {
    H[1] = h[0];
    return h[0];
  }

  if (H[idx] != INF)
  {
    return H[idx];
  }

  long long cost = min(dp(idx - 1) + abs(h[idx - 1] - h[idx]), dp(idx - 2) + abs(h[idx - 2] - h[idx]));
  H[idx] = cost;

  return cost;
}

int main()
{
  int N;
  cin >> N;
  H.resize(N);
  fill(H.begin(), H.end(), INF);

  for (int i = 0; i < N; ++i)
  {
    int a;
    cin >> a;
    h.push_back(a);
  }

  cout << dp(N - 1) << endl;
}