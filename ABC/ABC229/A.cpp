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

    string a, b;
    cin >> a >> b;

    if((a.at(0) == '.' && b.at(1) == '.') || (a.at(1) == '.' && b.at(0) == '.')) pno;
    else pyes;

    return 0;
}
