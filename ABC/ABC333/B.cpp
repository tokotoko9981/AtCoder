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

    string s, t;
    cin >> s;
    cin >> t;

    string p = "ABCDEAEDCBA";

    bool sCheck = false;
    bool tCheck = false;

    rep(0, i, p.size() - 1) {
        string tmp = p.substr(i, 2);
        if(s == tmp) sCheck = true;
        if(t == tmp) tCheck = true;
    }

    if(sCheck == tCheck) pyes;
    else pno;

    return 0;
}
