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

    vi A(M);
    rep(i, M) cin >> A.at(i);

    vs S(N);
    rep(i, N) cin >> S.at(i);

    vector<pair<int, int>> score(N);
    rep(i, N) {
        score.at(i).FI = (int)i + 1;
        score.at(i).SE = (int)i;
        rep(j, M) {
            if(S.at(i).at(j) == 'o') score.at(i).FI += A.at(j);
        }
    }

    sort(rall(score));

    vi ans(N);

    ans.at(score.at(0).SE) = 0;

    for(int i = 1; i < N; i++) {
        int diff = score.at(0).FI - score.at(i).FI;
        int Q = 0;
        while(diff > 0){
            int maxS = -1;
            int I;
            rep(j, M) {
                if (S.at(score.at(i).SE).at(j) == 'x' && maxS < A.at(j)) {
                    maxS = A.at(j);
                    I = (int) j;
                }
            }
            S.at(score.at(i).SE).at(I) = 'o';
            diff -= maxS;
            Q++;

        }
        ans.at(score.at(i).SE) = Q;
    }

    rep(i, N) {
        cout << ans.at(i) << endl;
    }

    return 0;
}
