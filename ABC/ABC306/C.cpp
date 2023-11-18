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
    vi A(N * 3);
    rep(0, i, N * 3) cin >> A.at(i);

    vi count(N + 1, 0);

    vi ans;

    rep(0, i, N * 3) {
        count.at(A.at(i))++;
        if(count.at(A.at(i)) == 2) ans.push_back(A.at(i));
    }

    rep(0, i, N) {
        cout << ans.at(i);
        if(i == N - 1) cout << " ";
        else cout << endl;
    }


    return 0;
}
