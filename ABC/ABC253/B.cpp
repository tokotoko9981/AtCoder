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

    int H, W;
    cin >> H >> W;
    vs S(H);
    rep(0, i, H) cin >> S.at(i);

    ll x1 = -1, y1 = -1, x2 = -1, y2 = -1;
    bool flag = true;
    rep(0, i, H) {
        rep(0, j, W) {
            if(S.at(i).at(j) == 'o' && flag) {
                S.at(i).at(j) = '-';
                x1 = i;
                y1 = j;
                flag = false;
                continue;
            }
            if(S.at(i).at(j) == 'o') {
                S.at(i).at(j) = '-';
                x2 = i;
                y2 = j;
                continue;
            }
        }
    }


    cout << abs(x1 - x2) + abs(y1 - y2) << endl;

    return 0;
}

