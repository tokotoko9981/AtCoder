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

    vi A(N);
    rep(i, N) cin >> A.at(i);

    int Q;
    cin >> Q;

    vi L(Q), R(Q);
    rep(i, Q) cin >> L.at(i) >> R.at(i);

    vi H(N + 1), M(N + 1);
    H.at(0) = 0;
    M.at(0) = 0;

    for(int i = 1; i <= N; i++) {
        H.at(i) = A.at(i - 1) + H.at(i - 1);
        M.at(i) = i - H.at(i);
    }

    rep(i, Q) {
        int hit = H.at(R.at(i)) - H.at(L.at(i) - 1);
        int miss = M.at(R.at(i)) - M.at(L.at(i) - 1);
        if(hit > miss) cout << "win" << endl;
        else if(hit < miss) cout << "lose" << endl;
        else cout << "draw" << endl;
    }

    return 0;
}
