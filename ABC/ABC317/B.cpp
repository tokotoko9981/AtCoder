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

    int N;
    cin >> N;

    vi A(N);
    rep(i, N) {
        cin >> A.at(i);
    }

    sort(all(A));

    int F = A.at(0);

    rep(i, N) {
        F++;
        if(A.at(i + 1) != F) {
            cout << F << endl;
            break;
        }
    }

    return 0;
}
