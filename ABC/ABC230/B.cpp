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

    string S;
    cin >> S;

    vs C(3);
    C.at(0) = "oxx";
    C.at(1) = "xox";
    C.at(2) = "xxo";

    bool check;
    rep(i, 3) {
        check = true;
        rep(j, S.size()) {
            if(C.at(i).at(j % 3) != S.at(j)) check = false;
        }
        if(check) {
            pyes;
            exit(0);
        }
    }

    pno;

    return 0;
}
