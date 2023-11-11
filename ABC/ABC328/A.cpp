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

    int N, X;
    cin >> N >> X;

    vi A(N);
    rep(0, i, N) cin >> A.at(i);

    int sum = 0;
    rep(0, i, N) {
        if(A.at(i) <= X) sum += A.at(i);
    }

    cout << sum << endl;

    return 0;
}

