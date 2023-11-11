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




int main(void){

    string S;
    cin >> S;




    rep(0, i, S.size() - 2) {
        string check = S.substr(i, 3);
        if(check == "ABC") {
            S.erase(S.begin() + i, S.begin() + i + 3);
            i = max(-1, (int)i - 3);
        }
        if((int)S.size() < 3) break;
    }

    cout << S << endl;


    return 0;
}
