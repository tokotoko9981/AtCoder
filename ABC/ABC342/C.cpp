#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using vll = vector<vector<long long>>;
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

    string s;
    cin >> s;

    ll q;
    cin >> q;

    vc c(q), d(q);
    rep(0, i, q) cin >> c[i] >> d[i];

    vc a(26), b(26);
    rep(0, i, 26) {
        a[i] = i + 'a';
        b[i] = i + 'a';
    }

    rep(0, i, q) {
        rep(0, j, 26) {
            if(c[i] == a[j]) a[j] = d[i];
        }
    }

    rep(0, i, n) {
        rep(0, j, 26) {
            if(s[i] == b[j]) {
                s[i] = a[j];
                break;
            }
        }
    }

    cout << s << endl;

    return 0;
}
