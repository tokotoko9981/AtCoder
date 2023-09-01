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

    int T;
    cin >> T;

    int N;
    cin >> N;

    vi L(N), R(N);
    rep(i, N) cin >> L.at(i) >> R.at(i);

    vi diff(T + 1, 0);
    rep(i, N) {
        diff.at(L.at(i))++;
        diff.at(R.at(i))--;
    }

    vi ans(T + 1);
    ans.at(0) = 0;

    for(int i = 1; i <= T; i++) {
        ans.at(i) = ans.at(i - 1) + diff.at(i - 1);
        cout << ans.at(i) << endl;
    }


    return 0;
}
