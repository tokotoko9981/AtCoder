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

    int N;
    cin >> N;

    vi x(N), y(N);
    rep(i, N) {
        cin >> x.at(i) >> y.at(i);
    }

    double maxR = -1;

    rep(i, N) {
        rep(j, N) {
            if(i != j) {
                int X = x.at(i) - x.at(j);
                int Y = y.at(i) - y.at(j);
                double range = sqrt(X * X + Y * Y);
                maxR = max(maxR, range);
            }
        }
    }

    cout << fixed << setprecision(10) << maxR << endl;

    return 0;
}
