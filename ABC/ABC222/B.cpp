#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    int N, P;

    cin >> N >> P;

    vi a(N);

    int count = 0;

    rep(i, N) {
        cin >> a.at(i);
        if(a.at(i) < P) count++;
    }

    cout << count << endl;



    return 0;
}
