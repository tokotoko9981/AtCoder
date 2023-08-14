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

    if(S.at(0) == S.at(1) && S.at(1) == S.at(2)) cout << 1 << endl;
    else if(S.at(0) != S.at(1) && S.at(1) != S.at(2) && S.at(0) != S.at(2)) cout << 6 << endl;
    else cout << 3 << endl;

    return 0;
}
