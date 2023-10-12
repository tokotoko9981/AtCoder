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

    string S, T;
    cin >> S >> T;

    bool B = false, E = false;

    string tmp = T.substr(0, N);
    if(tmp == S) B = true;
    tmp = T.substr(M - N, N);
    if(tmp == S) E = true;

    int ans;
    if(B && E) ans = 0;
    else if(B && !E) ans = 1;
    else if(!B && E) ans = 2;
    else ans = 3;

    cout << ans << endl;

    return 0;
}
