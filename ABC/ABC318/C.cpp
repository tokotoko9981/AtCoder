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
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl



int main(void){

    ll N, D, P;
    cin >> N >> D >> P;

    vector<ll> F(N);
    rep(i, N) cin >> F.at(i);

    sort(rall(F));

    vector<ll> pass(N, 0);

    ll j = 0;
    for(ll i = 1; i <= N; i++) {
        pass.at(j) += F.at(i - 1);
        if(i % D == 0) j++;
    }

    ll ans = 0;

    rep(i, N) {
        if(pass.at(i) > P) ans += P;
        else ans += pass.at(i);
    }

    cout << ans << endl;

    return 0;
}
