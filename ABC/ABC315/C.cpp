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

    int Max = -1, choice = -1;

    vi F(N), S(N);
    rep(i, N) {
        cin >> F.at(i) >> S.at(i);
        if(Max < S.at(i)) {
            Max = S.at(i);
            choice = i;
        }
    }

    int ans = -1, tmp;

    rep(i, N) {
        if(choice != i) {
            if (F.at(choice) == F.at(i)) tmp = Max + S.at(i) / 2;
            else tmp = Max + S.at(i);
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
