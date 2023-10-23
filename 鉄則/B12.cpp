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


double N;

bool check(double X);

int main(void){

    cin >> N;

    double L = 0, R = 1000, M;

    rep(0, i , 1000) {
        M = (L + R) / 2;
        bool ans = check(M);
        if(ans) R = M;
        else L = M;
    }

    cout << fixed << setprecision(10) << M << endl;

    return 0;
}

bool check(double X) {
    double ans = pow(X, 3) + X;
    if(ans >= N) return true;
    else return false;
}
