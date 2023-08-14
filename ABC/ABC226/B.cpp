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
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    int N;
    cin >> N;

    set<vi> S;

    int L;

    vi tmp;

    rep(i, N) {
        cin >> L;
        tmp = vi(L);
        rep(j, L) {
            cin >> tmp.at(j);
        }
        S.insert(tmp);
    }

    cout << S.size() << endl;

    return 0;
}
