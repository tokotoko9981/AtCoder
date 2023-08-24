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
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    string A, B;
    cin >> A >> B;

    bool ans = false;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    for(int i = 0; i < min(A.size(), B.size()); i++) {
        if((A.at(i) - '0') + (B.at(i) - '0') >= 10) ans = true;
    }

    if(ans) cout << "Hard" << endl;
    else cout << "Easy" << endl;

    return 0;
}
