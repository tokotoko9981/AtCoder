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

    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<pair<ll, ll>> ans(n);
    rep(0, i, n) {
        cin >> a.at(i);
        ans.at(i).FI = a.at(i);
        ans.at(i).SE = i;
    }

    sort(rall(a));
    sort(rall(ans));

    a.push_back(0);

    ll tmp = 0;
    ll sum = 0;
    rep(0, i, n) {
        ans.at(i).FI = sum;
        if(a.at(i + 1) != a.at(i)) {
            sum += a.at(i) + tmp;
            tmp = 0;
        }
        else {
            tmp += a.at(i);
        }
    }

    rep(0, i, n) swap(ans.at(i).FI, ans.at(i).SE);

    sort(all(ans));

    rep(0, i, n) {
        if(i != 0) cout << ' ';
        cout << ans.at(i).SE;
    }

    cout << endl;

    return 0;
}
