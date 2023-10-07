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
    vs S(N);
    rep(i, N) cin >> S.at(i);

    vector<pair<int, int>> A(N);

    rep(i, N) {
        int lose = 0;
        A.at(i).second = (int)i + 1;
        rep(j, N) {
            if(S.at(i).at(j) == 'x') lose++;
        }
        A.at(i).first = lose;
    }

    sort(all(A));

    rep(i, N) {
        cout << A.at(i).second << endl;
    }

    return 0;
}
