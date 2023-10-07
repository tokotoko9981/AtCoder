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

    string S;
    cin >> S;

    bool check = true;
    rep(i, (int)S.size()) {
        if(S.at(i) == '1' && (i + 1) % 2 == 0) check = false;
    }

    if(check) pyes;
    else pno;

    return 0;
}
