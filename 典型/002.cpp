#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using vll = vector<vector<long long>>;
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

template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

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

    ll n;
    cin >> n;

    for(ll bit = 0; bit < (1 << n); bit++) {
        string s = "";

        for(ll i = n - 1; i >= 0; i--) {
            if(!(bit & (1 << i))) s += '(';
            else s += ')';
        }

        ll count = 0;
        bool ok = true;
        rep(0, i, s.size()) {
            if(s[i] == '(') count++;
            else count--;
            if(count < 0) ok = false;
        }
        if(count != 0) ok = false;

        if(ok) cout << s << endl;
    }


    return 0;
}
