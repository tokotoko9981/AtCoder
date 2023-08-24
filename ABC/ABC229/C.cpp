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

    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> A(N);
    rep(i, N) {
        cin >> A.at(i).FI >> A.at(i).SE;
    }

    sort(rall(A));

    ll W = 0, ans = 0;
    rep(i, N) {
        if(W + A.at(i).SE < M) {
            ans += A.at(i).FI * A.at(i).SE;
            W += A.at(i).SE;
        }
        else {
            ans += (M - W) * A.at(i).FI;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
