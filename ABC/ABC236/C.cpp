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

    int N, M;
    cin >> N >> M;

    vs S(N);
    rep(i, N) cin >> S.at(i);

    set<string> check;
    vs T(M);
    rep(i, M) {
        cin >> T.at(i);
        check.insert(T.at(i));
    }

    int size;
    rep(i, N) {
        size = (int)check.size();
        check.insert(S.at(i));
        if(size == check.size()) pyes;
        else pno;
    }



    return 0;
}
