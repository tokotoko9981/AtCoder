#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    int N;
    cin >> N;

    string S;
    cin >> S;

    int Q;
    cin >> Q;

    vi t(Q), x(Q);
    vc c(Q);

    rep(i, Q) {
        cin >> t.at(i) >> x.at(i) >> c.at(i);
    }

    int end = 0;

    for(int i = 0; i < Q; i++) {
        if(t.at(i) != 1) {
            end = i;
        }
    }

    for(int i = 0; i < end; i++) {
        if(t.at(i) == 1) {
            S.at(x.at(i) - 1) = c.at(i);
        }
    }

    if(t.at(end) == 2) {
        for(int i = 0; i < N; i++) {
            if(S.at(i) >= 'A' && S.at(i) <= 'Z') {
                S.at(i) += 'a' - 'A';
            }
        }
    }
    else if(t.at(end) == 3) {
        for(int i = 0; i < N; i++) {
            if(S.at(i) >= 'a' && S.at(i) <= 'z') {
                S.at(i) -= 'a' - 'A';
            }
        }
    }

    for(int i = end; i < Q; i++) {
        if(t.at(i) == 1) {
            S.at(x.at(i) - 1) = c.at(i);
        }
    }

    cout << S << endl;

    return 0;
}
