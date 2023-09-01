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

    vi A(N);
    rep(i, N) cin >> A.at(i);

    int Q;
    cin >> Q;

    sort(all(A));

    rep(i, Q) {
        int X;
        cin >> X;
        int pos = lower_bound(all(A), X) - A.begin();
        cout << pos << endl;
    }

    return 0;
}
