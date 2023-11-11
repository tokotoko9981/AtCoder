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

    vi D(N);
    rep(0, i, N) cin >> D.at(i);

    int ans = 0;
    bool flag = true;
    rep(0, i, N) {
        if((i + 1) >= 10 && (i + 1) % 11 != 0) continue;
        rep(0, j, D.at(i)) {
            flag = true;
            int tmp = j + 1;
            while(tmp > 0) {
                if(tmp % 10 != (i + 1) % 10) {
                    flag = false;
                    break;
                }
                tmp /= 10;
            }
            if(flag) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

