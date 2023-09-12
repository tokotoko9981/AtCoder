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

    vi A(2 * N + 1);
    rep(i, 2 * N + 1) A.at(i) = (int)i + 1;

    while(1) {

        rep(i, 2 * N + 1) {
            if(A.at(i) != -1) {
                A.at(i) = -1;
                cout << i + 1 << endl;
                fflush(stdout);
                break;
            }
        }

        int W;
        cin >> W;
        if(W == 0) exit(0);

        A.at(W - 1) = -1;
    }

    return 0;
}
