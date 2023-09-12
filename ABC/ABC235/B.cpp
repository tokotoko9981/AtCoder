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

    vi H(N);
    rep(i, N) cin >> H.at(i);

    rep(i, N - 1) {
        if(H.at(i + 1) <= H.at(i)) {
            cout << H.at(i) << endl;
            exit(0);
        }
    }

    cout << H.at(N - 1) << endl;

    return 0;
}
