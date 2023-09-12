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

bool check(int x, int N, int K, vi A) {
    ll sum = 0;
    rep(i, N) sum += (x + 1) / A.at(i);
    if(sum >= K) return true;
    else return false;
}


int main(void){

    string S;
    cin >> S;

    cout << (S.at(0) + S.at(1) + S.at(2) - 3 * '0') * 111 << endl;

    return 0;
}
