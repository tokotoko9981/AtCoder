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
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    string S;
    cin >> S;

    rep(i, S.size()) {
        if(S.at(i) == 'a' || S.at(i) == 'i' || S.at(i) == 'u' || S.at(i) == 'e' || S.at(i) == 'o');
        else cout << S.at(i);
    }

    cout << endl;

    return 0;
}
