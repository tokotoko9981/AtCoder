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

    string S;
    cin >> S;

    rep(i, N - 2) {
        string tmp;
        tmp = S.substr(i, 3);
        if(tmp == "ABC") {
            cout << (int)i + 1 << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}
