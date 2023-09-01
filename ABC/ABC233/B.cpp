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

    int L, R;
    cin >> L >> R;

    string S;
    cin >> S;

    string tmp = S.substr(L - 1, R - L + 1);


    reverse(all(tmp));

    rep(i, R - L + 1) {
        S.at(i + L - 1) = tmp.at(i);
    }

    cout << S << endl;

    return 0;
}
