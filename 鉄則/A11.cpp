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

    int N, X;
    cin >> N >> X;

    vi A(N);
    rep(i, N) cin >> A.at(i);

    int L = 0, R = N - 1, M;

    while(L <= R) {
        M = (L + R) / 2;
        if(A.at(M) < X) L = M + 1;
        else if(A.at(M) > X) R = M - 1;
        else {
            cout << M + 1 << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}
