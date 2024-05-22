#include <bits/stdc++.h>
using namespace std;
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

void setup(){
#ifdef LOCAL
    ifstream inputFile("input.txt");
        cin.rdbuf(inputFile.rdbuf());
#else
    cin.tie(0); ios::sync_with_stdio(0);
#endif
    cout<<fixed<<setprecision(10);
}




int main(void){
    setup();

    ll n;
    cin >> n;
    vl a(n);
    rep(0, i, n) {
        cin >> a[i];
    }
    sort(all(a));

    ll ans = 0;
    rep(0, i, n) {
        ans += (n - 1) * a[i];
    }


    rep(0, i, n - 1) {
        ll iter = n - max((ll)((lower_bound(all(a), 100000000 - a[i]) - a.begin())), i + 1);
        ans -= iter * 100000000;
    }

    cout << ans << endl;

    return 0;
}
