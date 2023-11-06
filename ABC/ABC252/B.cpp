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

    int N, K;
    cin >> N >> K;

    vi A(N), B(K);
    rep(0, i, N) cin >> A.at(i);
    rep(0, i, K) cin >> B.at(i);

    int maxA = -1;
    rep(0, i, N) maxA = max(maxA, A.at(i));

    rep(0, i, N) {
        if(A.at(i) == maxA) {
            rep(0, j, K) {
                if(B.at(j) - 1 == i) {
                    pyes;
                    exit(0);
                }
            }
        }
    }

    pno;

    return 0;
}

