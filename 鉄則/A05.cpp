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
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl



int main(void){

    int N, K;
    cin >> N >> K;

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            int k = K - i - j;
            if(k <= N && k >= 1) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
