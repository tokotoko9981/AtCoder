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

bool check(int x, int N, int K, vi A) {
    ll sum = 0;
    rep(i, N) sum += (x + 1) / A.at(i);
    if(sum >= K) return true;
    else return false;
}


int main(void){

    int N;
    cin >> N;

    vi A(N, 0), B(N, 0);
    for(int i = 1; i < N; i++) cin >> A.at(i);
    for(int i = 2; i < N; i++) cin >> B.at(i);

    vi dp(N);
    dp.at(0) = 0;
    dp.at(1) = A.at(1);

    for(int i = 2; i < N; i++) {
        dp.at(i) = min(dp.at(i - 1) + A.at(i), dp.at(i - 2) + B.at(i));
    }

    cout << dp.at(N - 1) << endl;



    return 0;
}
