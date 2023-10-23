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

    int N, W;
    cin >> N >> W;

    vi A(N);
    rep(0, i , N) cin >> A.at(i);
    A.push_back(0);
    A.push_back(0);

    set<int> ans;
    rep(0, i , N + 2) {
        rep(i + 1, j, N + 2) {
            rep(j + 1, k, N + 2) {
                int sum = A.at(i) + A.at(j) + A.at(k);
                if (sum <= W) ans.insert(sum);
            }
        }
    }

    cout << ans.size() << endl;

    return 0;
}

