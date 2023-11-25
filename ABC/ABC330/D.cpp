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

    int N;
    cin >> N;

    vs S(N);
    rep(0, i, N) cin >> S.at(i);
    vi X(N, 0), Y(N, 0);

    rep(0, j, N) {
        int tmp = 0;
        rep(0, i, N) {
            if(S.at(i).at(j) == 'o') tmp++;
        }
        X.at(j) = tmp;
    }

    rep(0, i, N) {
        int tmp = 0;
        rep(0, j, N) {
            if(S.at(i).at(j) == 'o') tmp++;
        }
        Y.at(i) = tmp;
    }

    ll ans = 0;

    rep(0, i, N) {
        rep(0, j, N) {
            if(S.at(i).at(j) == 'o') {
                ans += (X.at(j) - 1) * (Y.at(i) - 1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
