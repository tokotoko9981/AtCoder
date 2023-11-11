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

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vi l(Q), r(Q);
    rep(0, i, Q) cin >> l.at(i) >> r.at(i);


    vi T(N - 1, 0);
    rep(0, i, N - 1) {
        if(S.at(i) == S.at(i + 1)) T.at(i)++;
    }

    vi Tsum(N, 0);

    rep(1, i, N) {
        Tsum.at(i) = T.at(i - 1) + Tsum.at(i - 1);
    }

    rep(0, i, Q) {
        cout << Tsum.at(r.at(i) - 1) - Tsum.at(l.at(i) - 1) << endl;
    }


    return 0;
}

