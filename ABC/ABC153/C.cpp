#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int N, K;

    cin >> N >> K;

    vi H(N);

    for(int i = 0; i < N; i++) {
        cin >> H.at(i);
    }

    sort(H.rbegin(), H.rend());

    for(int i = 0; i < min(N, K); i++) {
        H.at(i) = 0;
    }

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        ans += H.at(i);
    }

    cout << ans << endl;



    return 0;
}
