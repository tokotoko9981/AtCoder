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

    int N;
    cin >> N;

    vi A(N);
    rep(i, N) cin >> A.at(i);

    vi range(N + 1);
    range.at(0) = 0;
    int reg = 360;
    rep(i, N) {
        range.at(i + 1) = (A.at(i) + reg) % 360;
        reg += A.at(i);
    }

    range.push_back(360);
    sort(rall(range));


    int bw, ans;
    rep(i, N + 1) {
        bw = range.at(i) - range.at(i + 1);
        ans = max(ans, bw);
    }

    cout << ans << endl;

    return 0;
}
