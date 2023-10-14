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

    ll N;
    cin >> N;

    rep(X, 65) {
        rep(Y, 65) {
            ll D = pow(2, X) * pow(3, Y);
            if(D == N) {
                pyes;
                exit(0);
            }
        }
    }

    pno;

    return 0;
}
