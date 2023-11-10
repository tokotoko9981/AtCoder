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

    int N;
    cin >> N;

    vii A(N, vi(N, 0));

    rep(0, i, N) {
        rep(0, j, i + 1) {
            if(j == 0 || j == i) A.at(i).at(j) = 1;
            else A.at(i).at(j) = A.at(i - 1).at(j - 1) + A.at(i - 1).at(j);
        }
    }

    rep(0, i, N) {
        rep(0, j, i + 1) {
            cout << A.at(i).at(j);
            if(j == i) cout << endl;
            else cout << " ";
        }
    }

    return 0;
}

