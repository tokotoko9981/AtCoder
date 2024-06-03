#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using vll = vector<vector<long long>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using vss = vector<vector<string>>;
using ll = long long;
const ll INF = (1LL << 60);

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define YN(x) if(x) cout << "Yes\n"; else cout << "No\n"

template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

__attribute__((constructor)) void constructor() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(16);
}




int main(void){

    ll n, t;
    cin >> n >> t;
    vl a(t);
    rep(0, i, t) cin >> a[i];

    vl yoko(n, 0), tate(n, 0);
    ll bslash = 0, slash = 0;
    rep(0, i, t) {
        yoko[(a[i] - 1) / n]++;
        tate[(a[i] - 1) % n]++;
        if(a[i] % (n + 1) == 1) bslash++;
        if(n == 2) {
            if(a[i] == 2 || a[i] == 3) slash++;
        }
        else if(a[i] >= n && a[i] <= n * n - n + 1 &&
                a[i] % (n - 1) == 1) slash++;

        if(yoko[(a[i] - 1) / n] == n || tate[(a[i] - 1) % n] == n
           || bslash == n || slash == n) {
            cout << i + 1 << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}
