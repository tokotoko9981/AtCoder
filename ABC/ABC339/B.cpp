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


void setup(){
#ifdef LOCAL
    ifstream inputFile("input.txt");
        cin.rdbuf(inputFile.rdbuf());
#else
    cin.tie(0); ios::sync_with_stdio(0);
#endif
    cout<<fixed<<setprecision(10);
}


int main(void){
    setup();

    int h, w, n;
    cin >> h >> w >> n;

    vcc m(h, vc(w, '.'));

    pair<int, int> now;
    now.FI = 0;
    now.SE = 0;
    int state = 0;
    rep(0, i, n) {
        if(m.at(now.FI).at(now.SE) == '.') {
            m.at(now.FI).at(now.SE) = '#';
            state = (state + 1) % 4;
        }
        else {
            m.at(now.FI).at(now.SE) = '.';
            if(state == 0) state = 3;
            else state--;
        }

        if(state == 0) now.FI--;
        if(state == 1) now.SE++;
        if(state == 2) now.FI++;
        if(state == 3) now.SE--;

        if(now.FI == -1) now.FI = h - 1;
        if(now.FI == h) now.FI = 0;
        if(now.SE == -1) now.SE = w - 1;
        if(now.SE == w) now.SE = 0;
    }

    rep(0, i, h) {
        rep(0, j, w) {
            cout << m.at(i).at(j);
            if(j == w - 1) cout << endl;
        }
    }

    return 0;
}
