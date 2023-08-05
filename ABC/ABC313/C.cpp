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

    ll av = sum / N;

    vector<ll> len(N, 0);

    for(ll i = 0; i < N; i++) {
        if(av + 1 < A.at(i)) len.at(i) += A.at(i) - av - 1;
        else if(av > A.at(i)) len.at(i) += A.at(i) - av;
    }

    ll ans = 0;
    sum = 0;

    for(ll i = 0; i < N; i++) {
        if(len.at(i) < 0) ans -= len.at(i);
        else ans += len.at(i);
        sum += len.at(i);
    }

    if(sum < 0) sum *= -1;

    ans += sum;

    if(ans % 2 == 0) cout << ans / 2 << endl;
    else cout << ans / 2 + 1 << endl;



    return 0;
}
