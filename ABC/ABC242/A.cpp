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

    double A, B, C, X;
    cin >> A >> B >> C >> X;

    double ans;

    if(A >= X) ans = 1;
    else if(B < X) ans = 0;
    else ans = C / (B - A);

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
