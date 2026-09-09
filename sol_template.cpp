#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vs  = vector<string>;

#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define fi       first
#define se       second
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); i--)

const int INF  = 1e9;
const ll  LINF = 4e18;
const int MOD  = 1'000'000'007;
const ld  EPS  = 1e-9;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << '\n'
#else
#define dbg(x)
#endif

template <class T> bool chmax(T &a, const T &b) { return a < b ? (a = b, true) : false; }
template <class T> bool chmin(T &a, const T &b) { return b < a ? (a = b, true) : false; }

ll power(ll b, ll e, ll m = MOD) {
    ll r = 1; b %= m;
    for (; e > 0; e >>= 1, b = b * b % m) if (e & 1) r = r * b % m;
    return r;
}

void solve() {
    int n;
    cin >> n;
    vll a(n);
    for (auto &x : a) cin >> x;

    // ... your solution here ...

    cout << n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;      // uncomment for multi-test-case problems
    while (t--) solve();
    return 0;
}
