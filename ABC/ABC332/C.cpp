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

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    int ans = 0, have = 0, t_have = m;
    rep(0, i, n) {
        if(s.at(i) == '0') {
            have = ans;
            t_have = m;
        }
        else if(s.at(i) == '1') {
            if(t_have == 0 && have == 0) {
                ans++;
            }
            else if(t_have != 0){
                t_have--;
            }
            else {
                have--;
            }
        }
        else {
            if(have == 0) {
                ans++;
            }
            else {
                have--;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
