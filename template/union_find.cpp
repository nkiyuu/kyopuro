#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

struct UnionFind {
  vector<ll> par, siz;

  // 初期化
  UnionFind(ll n) : par(n, -1), siz(n, 1) {}

  // 根を求める
  ll root(ll x) {
    if (par[x] == -1) {
      return x;
    } else {
      return par[x] = root(par[x]);
    }
  }

  // x と y が同じグループに所属するかどうか
  bool issame(ll x, ll y) {
    return root(x) == root(y);
  }

  // x を含むグループと y を含むグループを併合する
  void unite(ll x, ll y) {
    x = root(x);
    y = root(y);

    if (x == y) {
      return;
    }

    if (siz[x] < siz[y]) swap(x, y);

    // y を x の子供とする
    par[y] = x;
    siz[x] += siz[y];

    return;
  }

  // x を含むグループのサイズ
  ll size(ll x) {
    return siz[root(x)];
  }
};