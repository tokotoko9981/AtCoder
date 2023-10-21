#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    string S;

    cin >> S;

    bool small = false, big = false, diff = false;

    for(int i = 0; i < S.size(); i++) {
        if(S.at(i) >= 'A' && S.at(i) <= 'Z') big = true;
        if(S.at(i) >= 'a' && S.at(i) <= 'z') small = true;
    }

    sort(S.begin(), S.end());

    string tmp = S;

    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

    if(S == tmp) diff = true;

    if(small && big && diff) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
