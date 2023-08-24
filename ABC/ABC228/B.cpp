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

    int N, X;
    cin >> N >> X;

    vi A(N);
    rep(i, N) {
        cin >> A.at(i);
    }

    vector<bool> know(N, false);


    for(int i = X - 1; !know.at(i);) {
        know.at(i) = true;
        i = A.at(i) - 1;
    }

    int count = 0;

    rep(i, N) {
        if(know.at(i)) count++;
    }

    cout << count << endl;

    return 0;
}
