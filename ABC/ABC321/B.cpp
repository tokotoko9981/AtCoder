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

    int N, X;
    cin >> N >> X;

    vi A(N - 1);
    rep(i, N - 1) cin >> A.at(i);

    for(int i = 0; i <= 100; i++) {
        vi B = A;
        B.push_back(i);
        sort(all(B));
        int score = 0;
        for(int j = 1; j < N - 1; j++) score += B.at(j);
        if(score >= X) {
            cout << i << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}
