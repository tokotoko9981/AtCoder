#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    string S;

    cin >> S;

    string max = S, min = S;

    for(int i = 0; i < S.size(); i++) {
        S.push_back('!');
        S.at(S.size() - 1) = S.at(0);
        for(int j = 0; j < S.size() - 1; j++) {
            S.at(j) = S.at(j + 1);
        }
        S.pop_back();
        if(S < min) min = S;
        if(S > max) max = S;
    }

    cout << min << endl;
    cout << max << endl;

    return 0;
}
