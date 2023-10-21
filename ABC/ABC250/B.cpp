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




int main(void){

    int N, A, B;
    cin >> N >> A >> B;

    vs ans(A * N, string(B * N, '-'));

    rep(0, i, A * N) {
        rep(0, j, B * N) {
            if(((i / A) + (j / B)) % 2 == 0) ans.at(i).at(j) = '.';
            else ans.at(i).at(j) = '#';
        }
    }


    rep(0, i, A * N) {
        cout << ans.at(i) << endl;
    }

    return 0;
}
