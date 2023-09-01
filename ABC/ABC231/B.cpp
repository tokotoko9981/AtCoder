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
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl



int main(void){

    int N;
    cin >> N;

    vs S(N);
    rep(i, N) {
        cin >> S.at(i);
    }

    sort(all(S));

    int count = 1;
    int max = -1;
    int in = 0;
    rep(i, N - 1) {
        if(S.at(i) == S.at(i + 1)) count++;
        else if(max < count) {
            max = count;
            count = 1;
            in = i;
        }
        else count = 1;
    }

    if(max < count) {
        in = N - 1;
    }

    cout << S.at(in) << endl;

    return 0;
}
