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

    vi W(N), X(N);
    rep(0, i, N) cin >> W.at(i) >> X.at(i);

    vi ans(25);
    rep(0, i, 25) {
        int player = 0;

        rep(0, j, N) {
            int time = (X.at(j) + (int)i) % 24;
            if(time >= 9 && time < 18) player += W.at(j);
        }

        ans.at(i) = player;
    }

    int A = -1;
    rep(0, k, 25) {
        A = max(A, ans.at(k));
    }

    cout << A << endl;

    return 0;
}

