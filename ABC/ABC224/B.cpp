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

    int H, W;
    cin >> H >> W;

    vii A(H, vi(W));

    rep(i, H) {
        rep (j, W) {
            cin >> A.at(i).at(j);
        }
    }

    bool check = true;

    rep(i, H) {
        rep(I, H) {
            rep(j, W) {
                rep(J, W) {
                    if(i < I && j < J) {
                        if(A.at(i).at(j) + A.at(I).at(J) > A.at(I).at(j) + A.at(i).at(J)) {
                            check = false;
                        }
                    }
                }
            }
        }
    }

    if(check) pyes;
    else pno;

    return 0;
}
