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

    string S, T;
    cin >> S >> T;

    vi A(S.size()), B(T.size());
    rep(i, S.size()) {
        A.at(i) = S.at(i) - 'a';
        B.at(i) = T.at(i) - 'a';
    }

    rep(i, 26) {
        rep(j, S.size()) {
            A.at(j)++;
            A.at(j) %= 26;
        }
        if(A == B) {
            pyes;
            exit(0);
        }
    }

    pno;


    return 0;
}
