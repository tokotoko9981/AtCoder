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

    vi A;

    for(int i = 1; i <= 9; i++) {
        if(N % i == 0) A.push_back(i);
    }

    cout << 1;
    bool frag;
    for(int i = 1; i <= N; i++) {
        frag = true;
        for(int j : A) {
            if(i % (N / j) == 0) {
                frag = false;
                cout << j;
                break;
            }
        }
        if(frag) cout << "-";
    }

    cout << endl;

    return 0;
}
