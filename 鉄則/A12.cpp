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

    int N, K;
    cin >> N >> K;

    vi A(N);
    rep(i, N) cin >> A.at(i);

    int L = 0, R = 100'000'000, M;

    while(L < R) {
        M = (L + R) / 2;
        bool ans = check(M, N, K, A);
        if(ans) R = M;
        else L = M + 1;
    }

    cout << L + 1 << endl;


    return 0;
}
