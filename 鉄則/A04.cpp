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

    int N;
    cin >> N;

    vi ans(11);

    for(int i = 9; i >= 0; i--) {
        ans.at(i) = N % 2;
        N /= 2;
    }

    rep(i, 10) {
        cout << ans.at(i);
    }

    cout << endl;

    cout << endl;

    return 0;
}
