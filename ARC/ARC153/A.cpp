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

    ll N;
    cin >> N;

    vector<ll> ans;

    rep(A, 10) {
        rep(B, 10) {
            rep(C, 10) {
                rep(D, 10) {
                    rep(E, 10) {
                        rep(F, 10) {
                            if(A != 0) {
                                ans.push_back(A * 100000000 + A * 10000000 + B * 1000000 + C * 100000 + D * 10000 + D * 1000 + E * 100 + F * 10 + E);
                            }
                        }
                    }
                }
            }
        }
    }

    sort(all(ans));

    cout << ans.at(N - 1) << endl;

    return 0;
}
