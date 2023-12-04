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

    int n, s, m, l;
    cin >> n >> s >> m >> l;

    ll ans = 100000000;
    rep(0, i, 100) {
        rep(0, j, 100) {
            rep(0, k, 100) {
                if(6 * i + 8 * j + 12 * k >= n) {
                    ans = min(ans, i * s + j * m + k * l);
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
