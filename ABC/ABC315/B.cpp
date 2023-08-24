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
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    int M;
    cin >> M;

    vi D(M);
    int sum = 0;
    rep(i, M) {
        cin >> D.at(i);
        sum += D.at(i);
    }

    int middle = (sum + 1) / 2;

    rep(i, M) {
        if(middle > D.at(i)) middle -= D.at(i);
        else {
            cout << i + 1 << " " << middle;
            exit(0);
        }
    }

    return 0;
}
