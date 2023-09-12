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
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    int N, M;
    cin >> N >> M;

    vi A(N);
    rep(i, N) cin >> A.at(i);

    vi B(M);
    rep(i, M) cin >> B.at(i);

    rep(i, M) {
        int S = B.at(i);
        bool check = true;
        rep(j, N) {
            if(S == A.at(j)) {
                A.at(j) = -1;
                check = false;
                break;
            }
        }
        if(check) {
            pno;
            exit(0);
        }
    }

    pyes;

    return 0;
}
