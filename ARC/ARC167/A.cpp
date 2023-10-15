#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    ll N, M;
    cin >> N >> M;

    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    vector<ll> Y(M, 0);

    sort(rall(A));

    rep(i, M) {
        Y.at(i) += A.at(i);
    }

    rep(i, N - M) {
        Y.at(M - 1 - i) += A.at(i + M);
    }

    ll ans = 0;

    rep(i, M) {
        ans += Y.at(i) * Y.at(i);
    }

    cout << ans << endl;

    return 0;
}
