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

    int N;
    cin >> N;

    vi A(N);
    rep(0, i, N) cin >> A.at(i);

    sort(rall(A));

    vs S(3);
    rep(0, i, 3) {
        S.at(i) = to_string(A.at(i));
    }

    vs ans(6);
    ans.at(0) = S.at(0) + S.at(1) + S.at(2);
    ans.at(1) = S.at(0) + S.at(2) + S.at(1);
    ans.at(2) = S.at(1) + S.at(0) + S.at(2);
    ans.at(3) = S.at(1) + S.at(2) + S.at(0);
    ans.at(4) = S.at(2) + S.at(0) + S.at(1);
    ans.at(5) = S.at(2) + S.at(1) + S.at(0);
    sort(rall(ans));
    cout << ans.at(0) << endl;

    return 0;
}
