#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    ll B;
    cin >> B;

    rep(1, A, 16) {
        ll tmp = A;
        rep(1, i, A) {
            tmp *= A;
        }
        if(tmp == B) {
            cout << A << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}

