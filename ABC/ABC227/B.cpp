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

    int N;
    cin >> N;

    vi S(N);
    rep(i, N) {
        cin >> S.at(i);
    }

    vector<bool> check(N, false);

    for(int a = 1; a <= 1000; a++) {
        for(int b = 1; b <= 1000; b++) {
            for(int i = 0; i < N; i++) {
                if(4 * a * b + 3 * a + 3 * b == S.at(i)) {
                    check.at(i) = true;
                }
            }
        }
    }

    int count = 0;
    rep(i, N) {
        if(!check.at(i)) count++;
    }

    cout << count << endl;


    return 0;
}
