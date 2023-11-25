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

    int N, L, R;
    cin >> N >> L >> R;

    vi A(N);
    rep(0, i, N) cin >> A.at(i);

    vi ans(N);

    rep(0, i, N) {
        if(R <= A.at(i)) ans.at(i) = R;
        else if(L >= A.at(i)) ans.at(i) = L;
        else ans.at(i) = A.at(i);
    }

    rep(0, i, N) {
        cout << ans.at(i);
        if(i != N - 1) cout << " ";
    }

    cout << endl;

    return 0;
}
