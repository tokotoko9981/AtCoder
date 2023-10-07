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

    vs S(N), T(N);
    rep(i, N) cin >> S.at(i) >> T.at(i);

    bool C;
    rep(i, N) {
        C = false;
        string tmp = S.at(i);
        rep(j, N) {
            if((tmp == S.at(j) || tmp == T.at(j)) && i != j) {
                if(C) {
                    pno;
                    exit(0);
                }
                tmp = T.at(i);
                C = true;
                j = 0;
            }
        }
    }

    pyes;

    return 0;
}
