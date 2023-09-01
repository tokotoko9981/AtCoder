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

    int N, Q;
    cin >> N >> Q;

    vi A(N);
    rep(i, N) cin >> A.at(i);

    vi L(Q), R(Q);
    rep(i, Q) cin >> L.at(i) >> R.at(i);


    vi S(N + 1);
    S.at(0) = 0;

    for(int i = 1; i <= N; i++) {
        S.at(i) = A.at(i - 1) + S.at(i - 1);
    }


    rep(i, Q) {
        cout << S.at(R.at(i)) - S.at(L.at(i) - 1) << endl;
    }

    return 0;
}
