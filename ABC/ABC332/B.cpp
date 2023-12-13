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

    int k, g, m;
    cin >> k >> g >> m;

    int G = 0, M = 0;
    rep(0, i, k) {
        if(G == g) G = 0;
        else if(M == 0) M = m;
        else {
            if(g - G > M) {
                G += M;
                M = 0;
            }
            else {
                M -= g - G;
                G = g;
            }
        }
    }

    cout << G << " " << M << endl;

    return 0;
}
