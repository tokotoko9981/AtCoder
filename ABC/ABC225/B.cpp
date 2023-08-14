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

    int N;
    cin >> N;

    vi A(N, 0);
    int a, b;
    rep(i, N - 1) {
        cin >> a >> b;
        A.at(a - 1)++;
        A.at(b - 1)++;
    }

    rep(i, N) {
        if(A.at(i) == N - 1) {
            pyes;
            exit(0);
        }
    }

    pno;

    return 0;
}
