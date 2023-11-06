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

    vii A(9, vi(9));

    bool ok = true;

    rep(0, i, 9) {
        rep(0, j, 9) {
            cin >>  A.at(i).at(j);
        }
    }

    rep(0, i, 9) {
        set<ll> check;
        rep(0, j, 9) {
            check.insert(A.at(i).at(j));
        }
        if(check.size() != 9) ok = false;
    }

    rep(0, i, 9) {
        set<ll> check;
        rep(0, j, 9) {
            check.insert(A.at(j).at(i));
        }
        if(check.size() != 9) ok = false;
    }

    rep(0, i, 9) {
        set<ll> check;
        rep(0, j, 9) {
            check.insert(A.at((i / 3) * 3 + (j / 3)).at(((i % 3) * 3) + (j % 3)));
        }
        if(check.size() != 9) ok = false;
    }

    if(ok) pyes;
    else pno;

    return 0;
}

