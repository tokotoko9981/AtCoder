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

    vi A(2002);
    rep(i, 2002) A.at(i) = (int)i;

    rep(i, N) {
        int E;
        cin >> E;
        A.at(E) = -1;
    }

    rep(i, 2002) {
        if(A.at(i) != -1) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
