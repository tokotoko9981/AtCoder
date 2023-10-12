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

bool check (string S) {
    string RS = S;
    reverse(all(RS));
    if(S == RS) return true;
    else return false;
}


int main(void){

    string S;
    cin >> S;

    bool ok = true;

    rep(i, (int)S.size() - 1) {
        if(S.at(i) <= S.at(i + 1)) ok = false;
    }

    if(ok) pyes;
    else pno;

    return 0;
}
