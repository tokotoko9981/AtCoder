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
    setup();

    ll n;
    cin >> n;

    ll m = 0;

    ll tmp = 1;
    while(tmp < n) {
        tmp *= 2;
        m++;
    }

    cout << m << endl << flush;

    int bi = 1;
    rep(0, i, m) {
        vector<ll> drink;
        bi *= 2;
        rep(0, j, n) {
            if(j % bi >= bi / 2) drink.push_back(j + 1);
        }
        cout << drink.size();
        rep(0, j, (ll)drink.size()) cout << " " << drink.at(j);
        cout << endl << flush;
    }

    string s;
    cin >> s;

    ll binary = 1;
    ll ans = 0;
    rep(0, i, m) {
        if(s.at(i) == '1') {
            ans += binary;
        }
        binary *= 2;
    }

    cout << ans + 1 << endl << flush;

    return 0;
}
