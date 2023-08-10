#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    ll H;

    cin >> H;

    ll ans = 0;

    ll enemy = 1;

    while(H > 0) {
        ans += enemy;

        enemy *= 2;

        H /= 2;
    }

    cout << ans << endl;

    return 0;
}
