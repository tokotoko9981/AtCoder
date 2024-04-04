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

    string s;
    cin >> s;

    vi a(26, 0);

    rep(0, i, s.size()) {
        a.at(s.at(i) - 'a')++;
    }

    int maxS = -1;
    int index;
    rep(0, i, 26) {
        if(maxS < a.at(i)) {
            maxS = a.at(i);
            index = i;
        }
    }

    cout << char(index + 'a') << endl;

    return 0;
}
