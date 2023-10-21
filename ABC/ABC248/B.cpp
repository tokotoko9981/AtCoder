
//
// Created by tokot on 2023/10/21.
//
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

    ll A, B, K;
    cin >> A >> B >> K;

    ll ans = 0;

    while(A < B) {
        A *= K;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
