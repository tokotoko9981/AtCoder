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

bool check (string S) {
    string RS = S;
    reverse(all(RS));
    if(S == RS) return true;
    else return false;
}


int main(void){

    string S;
    cin >> S;

    int ans = -1;
    for(int i = 0; i < (int)S.size(); i++) {
        for(int j = i; j < (int)S.size(); j++) {
            string T = S.substr(i, j - i + 1);
            bool ok = check(T);
            if(ok) ans = max(ans, j - i + 1);
        }
    }

    cout << ans << endl;

    return 0;
}
