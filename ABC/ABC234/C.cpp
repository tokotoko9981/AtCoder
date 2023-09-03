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

    ll K;
    cin >> K;
    K++;

    vector<ll> ans;

    while(K > 0) {
        ans.push_back(K % 2);
        K /= 2;
    }

    for(ll i = ans.size() - 1; i >= 0; i--) {
        if(ans.at(i) == 1) cout << 2;
        else cout << 0;
    }

    cout << endl;

    return 0;
}
