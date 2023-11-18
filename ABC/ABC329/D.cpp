#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define _GLIBCXX_DEBUG

void setup(){
#ifdef LOCAL
    ifstream inputFile("input.txt");
        cin.rdbuf(inputFile.rdbuf());
#else
    cin.tie(0); ios::sync_with_stdio(0);
#endif
    cout<<fixed<<setprecision(10);
}


int main(void){

    setup();

    int N, M;
    cin >> N >> M;

    vi A(M);
    rep(0, i, M) cin >> A.at(i);

    vi B(N, 0);
    int maxB = 0;

    vi ans;
    rep(0, i, M) {
        B.at(A.at(i) - 1)++;
        if(B.at(A.at(i) - 1) > maxB) {
            ans.push_back(A.at(i));
            maxB = B.at(A.at(i) - 1);
        }
        else if (B.at(A.at(i) - 1) == maxB) {
            ans.push_back(min(ans.at(i - 1), A.at(i)));
        }
        else ans.push_back(ans.at(i - 1));
    }

    rep(0, i, M) cout << ans.at(i) << endl;

    return 0;
}
