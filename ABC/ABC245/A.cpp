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

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool T = true;

    if(A > C) T = false;
    else if(B > D && A == C) T = false;

    if(T) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}
