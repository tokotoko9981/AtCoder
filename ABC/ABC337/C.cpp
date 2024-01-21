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

    vector<pair<ll, ll>> a(n);
    vector<bool> check(n, true);

    vector<ll> ans;

    rep(0, i, n) {
        cin >> a.at(i).FI;
        a.at(i).SE = i;
        if(a.at(i).FI == -1) {
            check.at(i) = false;
            ans.push_back(i);
        }
    }

    rep(0, i, n) {
        ll tmp = i;
        vector<ll> tmpA;
        if(check.at(tmp)) {
            while(check.at(a.at(tmp).SE)) {
                tmpA.push_back(a.at(a.at(tmp).SE).SE);
                check.at(tmp) = false;
                tmp = a.at(a.at(tmp).SE).FI - 1;
            }
            rrep(tmpA.size() - 1, j, 0) ans.push_back(tmpA.at(j));
        }
    }

    rep(0, i, n) {
        if(i != 0) cout << " ";
        cout << ans.at(i) + 1;
    }

    cout << endl;

    return 0;
}
