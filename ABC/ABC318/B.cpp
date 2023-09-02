#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl



int main(void){

    int N;
    cin >> N;

    vi A(N), B(N), C(N), D(N);
    rep(i, N) cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);

    int ans = 0;
    rep(i, 101) {
        rep(j, 101) {
            rep(k, N) {
                if(A.at(k) <= i && B.at(k) > i && C.at(k) <= j && D.at(k) > j) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
