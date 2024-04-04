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

    ll h, w, n;
    cin >> h >> w >> n;

    string t;
    cin >> t;

    vcc m(h, vc(w));

    rep(0, i, h) {
        rep(0, j, w) cin >> m.at(i).at(j);
    }


    ll ans = 0;
    rep(1, i, h - 1) {
        rep(1, j, w - 1) {
            ll count = 0;
            if(m.at(i).at(j) == '.') {
                ll nowX = j, nowY = i;
                rep(0, k, n) {
                    if(t.at(k) == 'U') nowY--;
                    if(t.at(k) == 'D') nowY++;
                    if(t.at(k) == 'L') nowX--;
                    if(t.at(k) == 'R') nowX++;
                    if(m.at(nowY).at(nowX) == '.') count++;
                    else break;
                }
            }
            if(count == n) ans++;
        }
    }

    cout << ans << endl;



    return 0;
}
