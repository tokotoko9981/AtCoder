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

    vi A(64);
    rep(0, i, 64) cin >> A.at(i);

    unsigned long long ans = 0, B = 1;

    rep(0, i, 64) {
        ans += A.at(i) * B;
        B *= 2;
    }

    cout << ans << endl;

    return 0;
}
