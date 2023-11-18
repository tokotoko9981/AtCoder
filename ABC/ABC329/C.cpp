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

    string S;
    cin >> S;

    S.push_back('-');

    vi C(26, 0);
    int ans = 0, count = 1;
    rep(0, i, N) {
        if(S.at(i) == S.at(i + 1)) count++;
        else {
            C.at(S.at(i) - 'a') = max(count, C.at(S.at(i) - 'a'));
            count = 1;
        }
    }

    rep(0, i, 26) {
        ans += C.at(i);
    }

    cout << ans;

    return 0;
}
