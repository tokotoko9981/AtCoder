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

    int N;
    cin >> N;

    vi h(N);
    rep(0, i, N) cin >> h.at(i);

    vi dp(N);
    dp.at(0) = 0;
    dp.at(1) = abs(h.at(0) - h.at(1));

    rep(2, i, N) {
        dp.at(i) = min(abs(h.at(i - 2) - h.at(i)) + dp.at(i - 2), abs(h.at(i - 1) - h.at(i)) + dp.at(i - 1));
    }

    cout << dp.at(N - 1) << endl;

    return 0;
}

