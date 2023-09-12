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

bool check(string S) {
    if(string(rall(S)) == S) return true;
    else return false;
}


int main(void){

    string S;
    cin >> S;

    if(check(S)) {
        pyes;
        exit(0);
    }

    int count = 0;
    for(int i = (int)S.size() - 1; i >= 0; i--) {
        if(S.at(i) == 'a') count++;
        else break;
    }

    for(char i : S) {
        if(i == 'a') count--;
        else break;
    }

    string T;
    rep(i, count) T += 'a';
    T += S;

    if(check(T)) pyes;
    else pno;

    return 0;
}
