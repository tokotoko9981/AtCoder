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

    ll d;
    cin >> d;

    ll ans = 10000000000000000;
    rep(0, x, (ll)sqrt(d) + 2) {
        ll c = x * x - d;
        if(c >= 0) ans = min(ans, c);
        else {
            c *= -1;
            ll y1 = (ll)sqrt(c);
            ll y2 = y1 + 1;
            ans = min(min(abs(y1 * y1 - c), ans), abs(y2 * y2 - c));
        }
    }

    cout << ans << endl;

    return 0;
}
