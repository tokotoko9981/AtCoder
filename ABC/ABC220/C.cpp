#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    ll N;
    cin >> N;

    vector<ll> A(N);
    ll sum = 0;
    for(ll i = 0; i < N; i++) {
        cin >> A.at(i);
        sum += A.at(i);
    }

    ll X;
    cin >> X;

    ll ans = (X / sum) * N;

    ll res = X % sum;

    for(ll i = 0; res >= 0; i++) {
        res -= A.at(i);
        ans++;
    }

    cout << ans << endl;


    return 0;
}
