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

    vc A(S.size());
    rep(i, S.size()) {
        A.at(i) = S.at(i);
    }

    sort(all(A));

    rep(i, S.size()) {
        cout << A.at(i);
    }

    cout << endl;

    return 0;
}
