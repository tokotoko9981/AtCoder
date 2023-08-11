#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    string S, T;
    bool B = false;

    cin >> S >> T;

    if(S == T) B = true;

    rep(i, S.size() - 1) {
        swap(S.at(i), S.at(i + 1));
        if(S == T) B = true;
        swap(S.at(i), S.at(i + 1));
    }

    if(B) pyes;
    else pno;

    return 0;
}
