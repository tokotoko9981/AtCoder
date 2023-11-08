#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    ll N, M, P;
    cin >> N >> M >> P;

    vector<ll> A(N), B(M);
    rep(0, i, N) cin >> A.at(i);
    rep(0, i, M) cin >> B.at(i);

    sort(all(B));
    vector<ll> BS(M + 1, 0);
    rep(0, i, M) BS.at(i + 1) = BS.at(i) + B.at(i);

    ll ans = 0;

    rep(0, i, N) {
        ll T = lower_bound(all(B), P - A.at(i)) - B.begin();
        ans += A.at(i) * T;
        ans += BS.at(T);
        ans += P * (M - T);
    }

    cout << ans << endl;

    return 0;
}

