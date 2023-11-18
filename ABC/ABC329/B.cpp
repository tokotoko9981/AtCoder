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

    int maxA = -1;
    rep(0, i, N) maxA = max(maxA, A.at(i));

    int ans = -1;

    rep(0, i, N) {
        if(A.at(i) != maxA) {
            ans = max(ans, A.at(i));
        }
    }

    cout << ans << endl;

    return 0;
}
