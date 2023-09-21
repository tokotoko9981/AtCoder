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

    vi x(3), y(3);
    rep(i, 3) cin >> x.at(i) >> y.at(i);

    int X, Y;
    if(x.at(0) == x.at(1)) X = x.at(2);
    if(x.at(0) == x.at(2)) X = x.at(1);
    if(x.at(2) == x.at(1)) X = x.at(0);

    if(y.at(0) == y.at(1)) Y = y.at(2);
    if(y.at(0) == y.at(2)) Y = y.at(1);
    if(y.at(2) == y.at(1)) Y = y.at(0);

    cout << X << " " << Y << endl;

    return 0;
}
