#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int P;

    cin >> P;

    vi fac(16);

    fac.at(1) = 1;

    for(int i = 2; i <= 10; i++) {
        fac.at(i) = fac.at(i - 1) * i;
    }

    int ans = 0;

    for(int i = 10; i >= 1; i--) {
        while(P >= fac.at(i)) {
            P -= fac.at(i);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
