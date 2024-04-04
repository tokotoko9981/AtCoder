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

    ll n, t;
    cin >> n >> t;

    vl a(t), b(t);
    rep(0, i, t) cin >> a[i] >> b[i];

    set<ll> check;
    map<ll, ll> allcheck;
    check.insert(0);
    allcheck[0] = n;
    vl p(n, 0);

    rep(0, i, t) {
        ll tmp = p[a[i] - 1];
        p[a[i] - 1] += b[i];
        ll newp = p[a[i] - 1];
        ll tmpcheck = check.size();
        check.insert(newp);
        if(tmpcheck != check.size()) allcheck[newp] = 1;
        else allcheck.at(newp)++;
        allcheck.at(tmp)--;
        if(allcheck.at(tmp) == 0) {
            check.erase(tmp);
            allcheck.erase(tmp);
        }
        cout << check.size() << endl;
    }

    return 0;
}
