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

    int N;
    cin >> N;

    vi A(4 * N - 1);
    rep(i, 4 * N - 1) cin >> A.at(i);
    sort(all(A));

    int count = 0;
    rep(i, 4 * N - 2) {
        if(A.at(i) == A.at(i + 1)) count++;
        else {
            if(count != 3) {
                cout << A.at(i) << endl;
                exit(0);
            }
            count = 0;
        }
    }

    cout << N << endl;

    return 0;
}
