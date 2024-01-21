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

    set<ll> a;

    vector<ll> list = {
            1,
            11,
            111,
            1111,
            11111,
            111111,
            1111111,
            11111111,
            111111111,
            1111111111,
            11111111111,
            111111111111,
            1111111111111,
    };

    rep(0, i, 13) {
        rep(0, j, 13) {
            rep(0, k, 13) {
                ll tmp = list[i] + list[j] + list[k];
                a.insert(tmp);
            }
        }
    }

    int count = 0;

    for(auto value : a) {
        count++;
        if(count == n) cout << value << endl;
    }

    return 0;
}
