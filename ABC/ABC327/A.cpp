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




int main(void){

    int N;
    cin >> N;

    string S;
    cin >> S;

    rep(0, i, N - 1) {
        if((S.at(i) == 'a' && S.at(i + 1) == 'b') || (S.at(i) == 'b' && S.at(i + 1) == 'a')) {
            pyes;
            exit(0);
        }
    }

    pno;

    return 0;
}

