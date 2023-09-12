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

    int H, W;
    cin >> H >> W;

    vii A(H, vi(W));
    vii B(W, vi(H));

    rep(i, H) {
        rep(j, W) {
            cin >> A.at(i).at(j);
        }
    }

    rep(i, H) {
        rep(j, W) {
            B.at(j).at(i) = A.at(i).at(j);
        }
    }

    rep(i, W) {
        rep(j, H) {
            cout << B.at(i).at(j);
            if(j == H - 1) cout << endl;
            else cout << " ";
        }
    }




    return 0;
}
